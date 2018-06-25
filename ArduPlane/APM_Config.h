// This file is my configuration file. 
// Norihiko Itoda 2018.06.25

#define GPS_PROTOCOL	    GPS_PROTOCOL_AUTO
#define AIRSPEED_SENSOR     DISABLED
#define ALTITUDE_MIX        0
#define LOG_ATTITUDE_FAST   ENABLED
#define LOG_ATTITUDE_MED    DISABLED
#define LOG_RAW             ENABLED

//#define AHRS_EKF_USE	1
#define AHRS_EKF_TYPE	2
#define EK2_ENABLE	1
#define EK3_ENABLE	0
#define EK2_IMU_MASK	3
#define LOG_BITMASK	131071

#define EK2_ALT_SOURCE	2
#define EK2_GPS_TYPE	0

//#define EKF_ALT_SOURCE	2
//#define EKF_GPS_TYPE	0

#define EK2_POSNE_NOISE		0.1
//#define EK2_ACC_PNOISE
//#define EK2_GYRO_PNOISE
//#define EK2_MAG_PNOISE
//#define EK2_WIND_PNOISE
//#define EK2_MAG_NOISE
//#define EK2_VELD_NOISE
//#define EK2_VELNE_NOISE
//#define EK2_ALT_NOISE
//#define EK2_GPS_CHECK

//#define EKF_POSNE_NOISE	0.1
//#define EKF_ACC_PNOISE
//#define EKF_GYRO_PNOISE
//#define EKF_MAGB_PNOISE
//#define EKF_MAGE_PNOISE
//#define EKF_WIND_PNOISE
//#define EKF_MAG_NOISE
//#define EKF_VELD_NOISE
//#define EKF_VELNE_NOISE
//#define EKF_ALT_NOISE

// End of my configuration file. 