void bhv_Spring_loop(void) {
	f32 Yspd=56.0f;
	u32 CarmackMeme;
	u32 Tmp;
	if (o->oInteractStatus != 0){
		set_mario_action(gMarioState,ACT_FREEFALL,0);
		gMarioStates[0].faceAngle[1]=o->oFaceAngleYaw;
		CarmackMeme = * (u32 *) &Yspd;
		Tmp+=(o->oBehParams2ndByte<<16);
		Yspd = *(f32 *) &Tmp;
		gMarioStates[0].forwardVel=Yspd;
		CarmackMeme+=(((o->oBehParams>>24)&0xFF)<<16);
		bounce_off_object(gMarioState,o,*(f32 *) &CarmackMeme);
		cur_obj_play_sound_1(SOUND_ACTION_BOUNCE_OFF_OBJECT);
	}
}