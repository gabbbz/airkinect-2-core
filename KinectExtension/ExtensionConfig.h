#ifndef KinectExtension_ExtensionConfig_h
#define KinectExtension_ExtensionConfig_h

//this file contains extension specific config
//we can use this to set platform / driver specific parameters

//#define AIRKINECT_TARGET_MSSDK = 1;
#define AIRKINECT_TARGET_OPENNI = 1;

#ifdef AIRKINECT_TARGET_MSSDK
	//MS SDK specific values
	const int MAX_SKELETONS = NUI_SKELETON_COUNT;
	const int NUM_JOINTS = 20;

	const char JOINT_NAMES[][16] = {
		"waist",
		"torso",
		"neck",
		"head",
    
		"left_shoulder",
		"left_elbow",
		"left_wrist",
		"left_hand",
    
		"right_shoulder",
		"right_elbow",
		"right_wrist",
		"right_hand",
    
		"left_hip",
		"left_knee",
		"left_ankle",
		"left_foot",
    
		"right_hip",
		"right_knee",
		"right_ankle",
		"right_foot"
	};
#else
	//OpenNI specific values
	const int MAX_SKELETONS = 15;
	const int NUM_JOINTS = 24;
	const char JOINT_NAMES[][16] = {
		"head",
		"neck",
		"torso",
		"waist",
    
		"left_collar",
		"left_shoulder",
		"left_elbow",
		"left_wrist",
		"left_hand",
		"left_fingertip",
    
		"right_collar",
		"right_shoulder",
		"right_elbow",
		"right_wrist",
		"right_hand",
		"right_fingertip",
    
		"left_hip",
		"left_knee",
		"left_ankle",
		"left_foot",
    
		"right_hip",
		"right_knee",
		"right_ankle",
		"right_foot"
	};
#endif

#endif