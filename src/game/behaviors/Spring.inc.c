void bhv_Spring_loop(void) {
	if (o->oInteractStatus != 0){
		set_mario_action(&gMarioStates[0],ACT_FREEFALL,0);
		gMarioStates[0].vel[1]=(f32)((o->oBehParams>>24)&0xFF);
		gMarioStates[0].forwardVel=(f32)(o->oBehParams2ndByte);
		gMarioStates[0].faceAngle[1]=o->oFaceAngleYaw;
		o->oInteractStatus = 0;
		o->oIntangibleTimer = 30;
		cur_obj_play_sound_1(SOUND_ACTION_BOUNCE_OFF_OBJECT);
	}
}