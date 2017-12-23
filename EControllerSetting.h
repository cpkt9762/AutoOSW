enum EControllerSetting
{
	k_EControllerSettingLeft_trackpad_mode = 0,	// left_trackpad_mode
	k_EControllerSettingRight_trackpad_mode,	// right_trackpad_mode
	k_EControllerSettingTrackpad_trigger_data,	// trackpad_trigger_data
	k_EControllerSettingHaptic_intensity,	// haptic_intensity
	k_EControllerSettingHaptic_intensity_override,	// haptic_intensity_override
	k_EControllerSettingRumble_type,	// rumble_type
	k_EControllerSettingRumble_intensity,	// rumble_intensity
	k_EControllerSettingEdge_binding_radius,	// edge_binding_radius
	k_EControllerSettingOutput_joystick,	// output_joystick
	k_EControllerSettingCurve_exponent,	// curve_exponent
	k_EControllerSettingCustom_curve_exponent,	// custom_curve_exponent
	k_EControllerSettingSwipe_duration,	// swipe_duration
	k_EControllerSettingDeadzone_inner_radius,	// deadzone_inner_radius
	k_EControllerSettingDeadzone_outer_radius,	// deadzone_outer_radius
	k_EControllerSettingDeadzone_shape,	// deadzone_shape
	k_EControllerSettingAdaptive_centering,	// adaptive_centering
	k_EControllerSettingVirtual_cap_size,	// virtual_cap_size
	k_EControllerSettingVirtual_stick_throw,	// virtual_stick_throw
	k_EControllerSettingAnti_deadzone,	// anti_deadzone
	k_EControllerSettingAnti_deadzone_buffer,	// anti_deadzone_buffer
	k_EControllerSettingEdge_binding_invert,	// edge_binding_invert
	k_EControllerSettingRequires_click = 22,	// requires_click
	k_EControllerSettingDeadzone,	// deadzone
	k_EControllerSettingLayout,	// layout
	k_EControllerSettingHold_repeats,	// hold_repeats
	k_EControllerSettingHold_repeat_inverval,	// hold_repeat_inverval
	k_EControllerSettingSensitivity = 30,	// sensitivity
	k_EControllerSettingSensitivity_vert_scale,	// sensitivity_vert_scale
	k_EControllerSettingSensitivity_horiz_scale,	// sensitivity_horiz_scale
	k_EControllerSettingTrackball,	// trackball
	k_EControllerSettingFriction,	// friction
	k_EControllerSettingFriction_vert_scale,	// friction_vert_scale
	k_EControllerSettingMouse_smoothing = 43,	// mouse_smoothing
	k_EControllerSettingMouse_move_threshold,	// mouse_move_threshold
	k_EControllerSettingRotation,	// rotation
	k_EControllerSettingAcceleration = 36,	// acceleration
	k_EControllerSettingDoubletap,	// doubletap
	k_EControllerSettingDoubletap_beep,	// doubletap_beep
	k_EControllerSettingEdge_spin_radius,	// edge_spin_radius
	k_EControllerSettingEdge_spin_velocity,	// edge_spin_velocity
	k_EControllerSettingInvert_x,	// invert_x
	k_EControllerSettingInvert_y,	// invert_y
	k_EControllerSettingScroll_angle = 53,	// scroll_angle
	k_EControllerSettingScroll_type = 55,	// scroll_type
	k_EControllerSettingScroll_invert,	// scroll_invert
	k_EControllerSettingScroll_friction,	// scroll_friction
	k_EControllerSettingScroll_wrap = 54,	// scroll_wrap
	k_EControllerSettingOutput_trigger = 58,	// output_trigger
	k_EControllerSettingAdaptive_threshold,	// adaptive_threshold
	k_EControllerSettingButton_size,	// button_size
	k_EControllerSettingButton_dist,	// button_dist
	k_EControllerSettingGyro_mode,	// gyro_mode
	k_EControllerSettingDoubetap_max_dist = 46,	// doubetap_max_dist
	k_EControllerSettingDoubetap_max_duration = 48,	// doubetap_max_duration
	k_EControllerSettingDoubetap_min_duration = 47,	// doubetap_min_duration
	k_EControllerSettingJoystick_smoothing = 63,	// joystick_smoothing
	k_EControllerSettingGyro_axis,	// gyro_axis
	k_EControllerSettingGyro_button,	// gyro_button
	k_EControllerSettingGyro_button_invert = 69,	// gyro_button_invert
	k_EControllerSettingGyro_neutral = 66,	// gyro_neutral
	k_EControllerSettingGyro_lock_extents,	// gyro_lock_extents
	k_EControllerSettingGyro_pointer_mode,	// gyro_pointer_mode
	k_EControllerSettingAnalog_emulation_period = 28,	// analog_emulation_period
	k_EControllerSettingOverlap_region,	// overlap_region
	k_EControllerSettingAnalog_emulation_duty_cycle_pct = 27,	// analog_emulation_duty_cycle_pct
	k_EControllerSettingVirtual_mode = 70,	// virtual_mode
	k_EControllerSettingLayer = 72,	// layer
	k_EControllerSettingTouch_menu_button_count,	// touch_menu_button_count
	k_EControllerSettingTouch_menu_opacity,	// touch_menu_opacity
	k_EControllerSettingTouch_menu_position_x,	// touch_menu_position_x
	k_EControllerSettingTouch_menu_position_y,	// touch_menu_position_y
	k_EControllerSettingTouch_menu_scale,	// touch_menu_scale
	k_EControllerSettingMouse_dampening_trigger,	// mouse_dampening_trigger
	k_EControllerSettingMouse_trigger_clamp_amount,	// mouse_trigger_clamp_amount
	k_EControllerSettingMousejoystick_deadzone_x = 50,	// mousejoystick_deadzone_x
	k_EControllerSettingMousejoystick_deadzone_y,	// mousejoystick_deadzone_y
	k_EControllerSettingMousejoystick_precision,	// mousejoystick_precision
	k_EControllerSettingTouch_menu_show_labels = 80,	// touch_menu_show_labels
	k_EControllerSettingGyro_sensitivity_scale,	// gyro_sensitivity_scale
	k_EControllerSettingScale,	// scale
	k_EControllerSettingPosition_x,	// position_x
	k_EControllerSettingPosition_y,	// position_y
	k_EControllerSettingTeleport_start,	// teleport_start
	k_EControllerSettingTeleport_stop,	// teleport_stop
	k_EControllerSettingTouchmenu_button_fire_type,	// touchmenu_button_fire_type
	k_EControllerSettingOutput_axis = 21,	// output_axis
	k_EControllerSettingTest_param_0 = 88,	// test_param_0
	k_EControllerSettingTest_param_1,	// test_param_1
	k_EControllerSettingTest_param_2,	// test_param_2
	k_EControllerSettingTest_param_3,	// test_param_3
	k_EControllerSettingTest_param_4,	// test_param_4
	k_EControllerSettingTest_param_5,	// test_param_5
	k_EControllerSettingTest_param_6,	// test_param_6
	k_EControllerSettingTest_param_7,	// test_param_7
	k_EControllerSettingTest_param_8,	// test_param_8
	k_EControllerSettingTest_param_9,	// test_param_9
	k_EControllerSettingAction_set_trigger_cursor_show,	// action_set_trigger_cursor_show
	k_EControllerSettingAction_set_trigger_cursor_hide,	// action_set_trigger_cursor_hide
	k_EControllerSettingDelay_start,	// delay_start
	k_EControllerSettingDelay_end,	// delay_end
	k_EControllerSettingCycle,	// cycle
	k_EControllerSettingToggle,	// toggle
	k_EControllerSettingRepeat_rate,	// repeat_rate
	k_EControllerSettingDouble_tap_time,	// double_tap_time
	k_EControllerSettingLong_press_time,	// long_press_time
	k_EControllerSettingActivation_threshold,	// activation_threshold
	k_EControllerSettingMouse_warp_x,	// mouse_warp_x
	k_EControllerSettingMouse_warp_y,	// mouse_warp_y
	k_EControllerSettingAnalog_value,	// analog_value
	k_EControllerSettingInterruptable,	// interruptable
	k_EControllerSettingActivator_output_axis = 113,	// activator_output_axis
	k_EControllerSettingSoft_press_sytle = 112,	// soft_press_sytle
}
