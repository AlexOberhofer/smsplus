#ifndef _SMSPLUS_H
#define _SMSPLUS_H

typedef struct {
	char gamename[256];
	char sramdir[256];
	char sramfile[516];
	char stdir[256];
} gamedata_t;

typedef struct {
	int video_scale;
	int audio_rate;
	int audio_fm;
	int audio_fmtype;
	int misc_region;
} settings_t;

void smsp_state(int slot, int mode);

#endif
