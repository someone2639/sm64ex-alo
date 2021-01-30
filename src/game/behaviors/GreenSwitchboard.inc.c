#define MAX_SPEED 20.0f
#define SPEED_INC 2.0f

void bhv_green_switchboard_loop(void) {
	struct Object *child = o->oUnk1A4;
	if (cur_obj_is_mario_on_platform()==1){
		f32 dx = gMarioState->pos[0] - o->oPosX;
		f32 dz = gMarioState->pos[2] - o->oPosZ;
		f32 facingZ = coss(o->oFaceAngleYaw);
		f32 facingX = sins(o->oFaceAngleYaw);
		//if dot is positive, mario is on front arrow
		if((facingZ*dz+facingX*dx)>0){
			o->oForwardVel = approach_by_increment(MAX_SPEED, o->oForwardVel, SPEED_INC);
			o->oFaceAnglePitch = (u32)approach_by_increment(2048.0f, o->oFaceAnglePitch, 128.0f);
		}else{
			o->oForwardVel = approach_by_increment(-MAX_SPEED, o->oForwardVel, SPEED_INC);
			//this function doesn't work well with negatives thanks nintendo
			if (o->oFaceAnglePitch>-2048){
				o->oFaceAnglePitch = (u32)approach_by_increment(-2048.0f, o->oFaceAnglePitch, 128.0f);
			}
		}
	}else{
		o->oForwardVel = approach_by_increment(0.0f, o->oForwardVel, SPEED_INC);
		o->oFaceAnglePitch = (u32)approach_by_increment(0.0f, o->oFaceAnglePitch, 128.0f);
	}
	child->oFaceAnglePitch+=(s32)(o->oForwardVel*200);
	obj_copy_pos(child,o);
}


void bhv_green_switchboard_init(void) {
	o->oUnk1A4 = spawn_object(o,0x2C,bhvUnused05A8);
}


