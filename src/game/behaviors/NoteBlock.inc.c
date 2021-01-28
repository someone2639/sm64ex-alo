void bhv_noteblock_loop(void) {
	if (cur_obj_is_mario_on_platform()){
		set_mario_action(&gMarioStates[0],ACT_DOUBLE_JUMP,0);
		gMarioStates[0].vel[1]=(f32) o->oBehParams2ndByte*2;
		o->oAction=1;
	}
	if (o->oAction==1){
		if (o->oTimer==4){
			o->oAction=0;
		}else{
			if (o->oTimer>2){
				o->oPosY += (f32)(o->oTimer%15)*6;
			}else{
				o->oPosY -= (f32)(o->oTimer%15)*6;
			}
		}
	}
}