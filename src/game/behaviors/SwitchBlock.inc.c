static u32 SwitchBlockState = 0;

void bhv_Switchblock_Switch_loop(void){
	load_object_collision_model();
	o->oAnimState = o->oBehParams;
	if ((cur_obj_is_mario_on_platform()==1)&& (SwitchBlockState!=o->oBehParams)){
		SwitchBlockState=SwitchBlockState^1;
	}
	o->header.gfx.scale[1] = (f32)(SwitchBlockState!=o->oBehParams)*0.9f+0.1f;
}


void bhv_Switchblock_loop(void){
	o->oAnimState = (2*o->oBehParams)+o->oAction;
	if (SwitchBlockState==o->oBehParams){
		load_object_collision_model();
		o->oAction=0;
	}else{
		o->oAction=1;
	}
}