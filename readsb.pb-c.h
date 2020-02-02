/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: readsb.proto */

#ifndef PROTOBUF_C_readsb_2eproto__INCLUDED
#define PROTOBUF_C_readsb_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _AircraftMeta AircraftMeta;
typedef struct _AircraftMeta__NavModes AircraftMeta__NavModes;
typedef struct _AircraftMeta__ValidSource AircraftMeta__ValidSource;
typedef struct _AircraftsUpdate AircraftsUpdate;
typedef struct _Receiver Receiver;
typedef struct _StatisticEntry StatisticEntry;
typedef struct _Statistics Statistics;


/* --- enums --- */

typedef enum _AircraftMeta__AirGround {
  AIRCRAFT_META__AIR_GROUND__AG_INVALID = 0,
  AIRCRAFT_META__AIR_GROUND__AG_GROUND = 1,
  AIRCRAFT_META__AIR_GROUND__AG_AIRBORNE = 2,
  AIRCRAFT_META__AIR_GROUND__AG_UNCERTAIN = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(AIRCRAFT_META__AIR_GROUND)
} AircraftMeta__AirGround;
/*
 * Type of underlying message, one of:
 */
typedef enum _AircraftMeta__AddrType {
  /*
   * Mode S or ADS-B, ICAO address, transponder sourced.
   */
  AIRCRAFT_META__ADDR_TYPE__ADDR_ADSB_ICAO = 0,
  /*
   * ADS-B, ICAO address, non-transponder.
   */
  AIRCRAFT_META__ADDR_TYPE__ADDR_ADSB_ICAO_NT = 1,
  /*
   * ADS-R, ICAO address.
   */
  AIRCRAFT_META__ADDR_TYPE__ADDR_ADSR_ICAO = 2,
  /*
   * TIS-B, ICAO address.
   */
  AIRCRAFT_META__ADDR_TYPE__ADDR_TISB_ICAO = 3,
  /*
   * ADS-B, other address format.
   */
  AIRCRAFT_META__ADDR_TYPE__ADDR_ADSB_OTHER = 4,
  /*
   * ADS-R, other address format.
   */
  AIRCRAFT_META__ADDR_TYPE__ADDR_ADSR_OTHER = 5,
  /*
   * TIS-B, Mode A code + track file number.
   */
  AIRCRAFT_META__ADDR_TYPE__ADDR_TISB_TRACKFILE = 6,
  /*
   * TIS-B, other address format.
   */
  AIRCRAFT_META__ADDR_TYPE__ADDR_TISB_OTHER = 7,
  /*
   * Mode A.
   */
  AIRCRAFT_META__ADDR_TYPE__ADDR_MODE_A = 8,
  /*
   * Unknown address format.
   */
  AIRCRAFT_META__ADDR_TYPE__ADDR_UNKNOWN = 9
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(AIRCRAFT_META__ADDR_TYPE)
} AircraftMeta__AddrType;
/*
 * ADS-B emergency/priority status, a superset of the 7x00 squawks
 */
typedef enum _AircraftMeta__Emergency {
  AIRCRAFT_META__EMERGENCY__EMERGENCY_NONE = 0,
  AIRCRAFT_META__EMERGENCY__EMERGENCY_GENERAL = 1,
  AIRCRAFT_META__EMERGENCY__EMERGENCY_LIFEGUARD = 2,
  AIRCRAFT_META__EMERGENCY__EMERGENCY_MINFUEL = 3,
  AIRCRAFT_META__EMERGENCY__EMERGENCY_NORDO = 4,
  AIRCRAFT_META__EMERGENCY__EMERGENCY_UNLAWFUL = 5,
  AIRCRAFT_META__EMERGENCY__EMERGENCY_DOWNED = 6,
  AIRCRAFT_META__EMERGENCY__EMERGENCY_RESERVED = 7
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(AIRCRAFT_META__EMERGENCY)
} AircraftMeta__Emergency;
/*
 * Interpretation of SIL: unknown, perhour, persample.
 */
typedef enum _AircraftMeta__SilType {
  AIRCRAFT_META__SIL_TYPE__SIL_INVALID = 0,
  AIRCRAFT_META__SIL_TYPE__SIL_UNKNOWN = 1,
  AIRCRAFT_META__SIL_TYPE__SIL_PER_SAMPLE = 2,
  AIRCRAFT_META__SIL_TYPE__SIL_PER_HOUR = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(AIRCRAFT_META__SIL_TYPE)
} AircraftMeta__SilType;

/* --- messages --- */

/*
 * Set of engaged automation modes.
 */
struct  _AircraftMeta__NavModes
{
  ProtobufCMessage base;
  protobuf_c_boolean has_autopilot;
  protobuf_c_boolean autopilot;
  protobuf_c_boolean has_vnav;
  protobuf_c_boolean vnav;
  protobuf_c_boolean has_althold;
  protobuf_c_boolean althold;
  protobuf_c_boolean has_approach;
  protobuf_c_boolean approach;
  protobuf_c_boolean has_lnav;
  protobuf_c_boolean lnav;
  protobuf_c_boolean has_tcas;
  protobuf_c_boolean tcas;
};
#define AIRCRAFT_META__NAV_MODES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&aircraft_meta__nav_modes__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


/*
 * List of valid source fields for each parameter.
 */
struct  _AircraftMeta__ValidSource
{
  ProtobufCMessage base;
  protobuf_c_boolean has_callsign;
  uint32_t callsign;
  protobuf_c_boolean has_altitude;
  uint32_t altitude;
  protobuf_c_boolean has_alt_geom;
  uint32_t alt_geom;
  protobuf_c_boolean has_gs;
  uint32_t gs;
  protobuf_c_boolean has_ias;
  uint32_t ias;
  protobuf_c_boolean has_tas;
  uint32_t tas;
  protobuf_c_boolean has_mach;
  uint32_t mach;
  protobuf_c_boolean has_track;
  uint32_t track;
  protobuf_c_boolean has_track_rate;
  uint32_t track_rate;
  protobuf_c_boolean has_roll;
  uint32_t roll;
  protobuf_c_boolean has_mag_heading;
  uint32_t mag_heading;
  protobuf_c_boolean has_true_heading;
  uint32_t true_heading;
  protobuf_c_boolean has_baro_rate;
  uint32_t baro_rate;
  protobuf_c_boolean has_geom_rate;
  uint32_t geom_rate;
  protobuf_c_boolean has_squawk;
  uint32_t squawk;
  protobuf_c_boolean has_emergency;
  uint32_t emergency;
  protobuf_c_boolean has_nav_qnh;
  uint32_t nav_qnh;
  protobuf_c_boolean has_nav_altitude_mcp;
  uint32_t nav_altitude_mcp;
  protobuf_c_boolean has_nav_altitude_fms;
  uint32_t nav_altitude_fms;
  protobuf_c_boolean has_nav_heading;
  uint32_t nav_heading;
  protobuf_c_boolean has_nav_modes;
  uint32_t nav_modes;
  protobuf_c_boolean has_lat;
  uint32_t lat;
  protobuf_c_boolean has_lon;
  uint32_t lon;
  protobuf_c_boolean has_nic;
  uint32_t nic;
  protobuf_c_boolean has_rc;
  uint32_t rc;
  protobuf_c_boolean has_nic_baro;
  uint32_t nic_baro;
  protobuf_c_boolean has_nac_p;
  uint32_t nac_p;
  protobuf_c_boolean has_nac_v;
  uint32_t nac_v;
  protobuf_c_boolean has_sil;
  uint32_t sil;
  protobuf_c_boolean has_sil_type;
  uint32_t sil_type;
  protobuf_c_boolean has_gva;
  uint32_t gva;
  protobuf_c_boolean has_sda;
  uint32_t sda;
};
#define AIRCRAFT_META__VALID_SOURCE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&aircraft_meta__valid_source__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


/*
 **
 * Readsb single tracked aircraft meta data.
 */
struct  _AircraftMeta
{
  ProtobufCMessage base;
  /*
   * The 24-bit ICAO identifier of the aircraft, as 6 hex digits. The identifier may start with '~', this means that the address is a non-ICAO address (e.g. from TIS-B).
   */
  protobuf_c_boolean has_addr;
  uint32_t addr;
  /*
   * Callsign, the flight name or aircraft registration as 8 chars.
   */
  char *flight;
  /*
   * Mode A code (Squawk), encoded as 4 octal digits.
   */
  protobuf_c_boolean has_squawk;
  uint32_t squawk;
  /*
   * Emitter category to identify particular aircraft or vehicle classes (values A0 - D7).
   */
  protobuf_c_boolean has_category;
  uint32_t category;
  /*
   * The aircraft barometric altitude in feet.
   */
  protobuf_c_boolean has_alt_baro;
  int32_t alt_baro;
  /*
   * Heading, degrees clockwise from magnetic north.
   */
  protobuf_c_boolean has_mag_heading;
  int32_t mag_heading;
  /*
   * Indicated air speed in knots.
   */
  protobuf_c_boolean has_ias;
  uint32_t ias;
  /*
   * Aircraft position latitude in decimal degrees.
   */
  protobuf_c_boolean has_lat;
  double lat;
  /*
   * Aircraft position longitude in decimal degrees.
   */
  protobuf_c_boolean has_lon;
  double lon;
  /*
   * Total number of Mode S messages received from this aircraft.
   */
  protobuf_c_boolean has_messages;
  uint64_t messages;
  /*
   * When a message was last received from this aircraft. (in milliseconds!!!)
   */
  protobuf_c_boolean has_seen;
  uint64_t seen;
  /*
   * Recent average RSSI (signal power), in dbFS; this will always be negative.
   */
  protobuf_c_boolean has_rssi;
  float rssi;
  protobuf_c_boolean has_air_ground;
  AircraftMeta__AirGround air_ground;
  /*
   * Geometric (GNSS / INS) altitude in feet referenced to the WGS84 ellipsoid.
   */
  protobuf_c_boolean has_alt_geom;
  int32_t alt_geom;
  /*
   * Rate of change of barometric altitude, feet/minute.
   */
  protobuf_c_boolean has_baro_rate;
  int32_t baro_rate;
  /*
   * Rate of change of geometric (GNSS / INS) altitude. feet/minute
   */
  protobuf_c_boolean has_geom_rate;
  int32_t geom_rate;
  /*
   * Ground speed in knots.
   */
  protobuf_c_boolean has_gs;
  uint32_t gs;
  /*
   * True air speed in knots.
   */
  protobuf_c_boolean has_tas;
  uint32_t tas;
  /*
   * Mach number.
   */
  protobuf_c_boolean has_mach;
  float mach;
  /*
   * Heading, degrees clockwise from true north.
   */
  protobuf_c_boolean has_true_heading;
  int32_t true_heading;
  /*
   * True track over ground in degrees (0-359).
   */
  protobuf_c_boolean has_track;
  int32_t track;
  /*
   * Rate of change of track, degrees/second.
   */
  protobuf_c_boolean has_track_rate;
  float track_rate;
  /*
   * Roll, degrees, negative is left roll.
   */
  protobuf_c_boolean has_roll;
  float roll;
  /*
   * Navigation Accuracy for Velocity.
   */
  protobuf_c_boolean has_nav_qnh;
  float nav_qnh;
  /*
   * Selected altitude from the Mode Control Panel / Flight Control Unit (MCP/FCU) or equivalent equipment.
   */
  protobuf_c_boolean has_nav_altitude_mcp;
  int32_t nav_altitude_mcp;
  /*
   * Selected altitude from the Flight Management System (FMS).
   */
  protobuf_c_boolean has_nav_altitude_fms;
  int32_t nav_altitude_fms;
  /*
   * Selected heading (True or Magnetic is not defined in DO-260B, mostly Magnetic as that is the de facto standard).
   */
  protobuf_c_boolean has_nav_heading;
  int32_t nav_heading;
  /*
   * Navigation Integrity Category.
   */
  protobuf_c_boolean has_nic;
  uint32_t nic;
  /*
   * Radius of Containment, meters; a measure of position integrity derived from NIC & supplementary bits.
   */
  protobuf_c_boolean has_rc;
  uint32_t rc;
  /*
   * ADS-B Version Number 0, 1, 2 (3-7 are reserved)
   */
  protobuf_c_boolean has_version;
  int32_t version;
  /*
   * Navigation Integrity Category for Barometric Altitude
   */
  protobuf_c_boolean has_nic_baro;
  uint32_t nic_baro;
  /*
   * Navigation Accuracy for Position
   */
  protobuf_c_boolean has_nac_p;
  uint32_t nac_p;
  /*
   * Navigation Accuracy for Velocity
   */
  protobuf_c_boolean has_nac_v;
  uint32_t nac_v;
  /*
   * Source Integity Level
   */
  protobuf_c_boolean has_sil;
  uint32_t sil;
  /*
   * How long ago (in seconds before "now") the position was last updated.
   */
  protobuf_c_boolean has_seen_pos;
  uint32_t seen_pos;
  /*
   * Flight status alert bit.
   */
  protobuf_c_boolean has_alert;
  protobuf_c_boolean alert;
  /*
   * Flight status special position identification bit.
   */
  protobuf_c_boolean has_spi;
  protobuf_c_boolean spi;
  /*
   * Geometric Vertical Accuracy
   */
  protobuf_c_boolean has_gva;
  uint32_t gva;
  /*
   * System Design Assurance
   */
  protobuf_c_boolean has_sda;
  uint32_t sda;
  protobuf_c_boolean has_addr_type;
  AircraftMeta__AddrType addr_type;
  protobuf_c_boolean has_emergency;
  AircraftMeta__Emergency emergency;
  protobuf_c_boolean has_sil_type;
  AircraftMeta__SilType sil_type;
  AircraftMeta__NavModes *nav_modes;
  AircraftMeta__ValidSource *valid_source;
};
#define AIRCRAFT_META__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&aircraft_meta__descriptor) \
    , 0,0, NULL, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, NULL, NULL }


/*
 **
 * Collection of tracked aircrafts.
 */
struct  _AircraftsUpdate
{
  ProtobufCMessage base;
  /*
   * The time this file was generated, in seconds since Unix epoch.
   */
  protobuf_c_boolean has_now;
  uint64_t now;
  /*
   * The total number of Mode S messages processed since readsb started.
   */
  protobuf_c_boolean has_messages;
  uint64_t messages;
  /*
   * The aircraft collection.
   */
  size_t n_aircraft;
  AircraftMeta **aircraft;
};
#define AIRCRAFTS_UPDATE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&aircrafts_update__descriptor) \
    , 0,0, 0,0, 0,NULL }


/*
 **
 * Readsb receiver details.
 */
struct  _Receiver
{
  ProtobufCMessage base;
  /*
   * Readsb version
   */
  char *version;
  /*
   * Data refresh period.
   */
  protobuf_c_boolean has_refresh;
  float refresh;
  /*
   * Receiver location latitude.
   */
  protobuf_c_boolean has_latitude;
  double latitude;
  /*
   * Receiver location longitude;
   */
  protobuf_c_boolean has_longitude;
  double longitude;
  /*
   * Aircraft history size.
   */
  protobuf_c_boolean has_history;
  uint32_t history;
};
#define RECEIVER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&receiver__descriptor) \
    , NULL, 0,0, 0,0, 0,0, 0,0 }


/*
 **
 * Single statistcs entry.
 */
struct  _StatisticEntry
{
  ProtobufCMessage base;
  protobuf_c_boolean has_start;
  uint64_t start;
  protobuf_c_boolean has_stop;
  uint64_t stop;
  protobuf_c_boolean has_messages;
  uint64_t messages;
  protobuf_c_boolean has_max_distance_in_metres;
  uint32_t max_distance_in_metres;
  protobuf_c_boolean has_max_distance_in_nautical_miles;
  uint32_t max_distance_in_nautical_miles;
  protobuf_c_boolean has_altitude_suppressed;
  uint64_t altitude_suppressed;
  protobuf_c_boolean has_tracks_new;
  uint64_t tracks_new;
  protobuf_c_boolean has_tracks_single_message;
  uint64_t tracks_single_message;
  protobuf_c_boolean has_tracks_with_position;
  uint64_t tracks_with_position;
  protobuf_c_boolean has_tracks_mlat_position;
  uint64_t tracks_mlat_position;
  protobuf_c_boolean has_tracks_tisb_position;
  uint64_t tracks_tisb_position;
  protobuf_c_boolean has_cpu_demod;
  uint64_t cpu_demod;
  protobuf_c_boolean has_cpu_reader;
  uint64_t cpu_reader;
  protobuf_c_boolean has_cpu_background;
  uint64_t cpu_background;
  protobuf_c_boolean has_cpr_surface;
  uint64_t cpr_surface;
  protobuf_c_boolean has_cpr_airborne;
  uint64_t cpr_airborne;
  protobuf_c_boolean has_cpr_global_ok;
  uint64_t cpr_global_ok;
  protobuf_c_boolean has_cpr_global_bad;
  uint64_t cpr_global_bad;
  protobuf_c_boolean has_cpr_global_range;
  uint64_t cpr_global_range;
  protobuf_c_boolean has_cpr_global_speed;
  uint64_t cpr_global_speed;
  protobuf_c_boolean has_cpr_global_skipped;
  uint64_t cpr_global_skipped;
  protobuf_c_boolean has_cpr_local_ok;
  uint64_t cpr_local_ok;
  protobuf_c_boolean has_cpr_local_aircraft_relative;
  uint64_t cpr_local_aircraft_relative;
  protobuf_c_boolean has_cpr_local_receiver_relative;
  uint64_t cpr_local_receiver_relative;
  protobuf_c_boolean has_cpr_local_skipped;
  uint64_t cpr_local_skipped;
  protobuf_c_boolean has_cpr_local_range;
  uint64_t cpr_local_range;
  protobuf_c_boolean has_cpr_local_speed;
  uint64_t cpr_local_speed;
  protobuf_c_boolean has_cpr_filtered;
  uint64_t cpr_filtered;
  protobuf_c_boolean has_remote_modeac;
  uint64_t remote_modeac;
  protobuf_c_boolean has_remote_modes;
  uint64_t remote_modes;
  protobuf_c_boolean has_remote_bad;
  uint64_t remote_bad;
  protobuf_c_boolean has_remote_unknown_icao;
  uint64_t remote_unknown_icao;
  protobuf_c_boolean has_local_samples_processed;
  uint64_t local_samples_processed;
  protobuf_c_boolean has_local_samples_dropped;
  uint64_t local_samples_dropped;
  protobuf_c_boolean has_local_modeac;
  uint64_t local_modeac;
  protobuf_c_boolean has_local_modes;
  uint64_t local_modes;
  protobuf_c_boolean has_local_bad;
  uint64_t local_bad;
  protobuf_c_boolean has_local_unknown_icao;
  uint64_t local_unknown_icao;
  protobuf_c_boolean has_local_strong_signals;
  uint64_t local_strong_signals;
  protobuf_c_boolean has_local_signal;
  float local_signal;
  protobuf_c_boolean has_local_noise;
  float local_noise;
  protobuf_c_boolean has_local_peak_signal;
  float local_peak_signal;
};
#define STATISTIC_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&statistic_entry__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


/*
 **
 * Readsb receiver statistics.
 */
struct  _Statistics
{
  ProtobufCMessage base;
  StatisticEntry *latest;
  StatisticEntry *last_1min;
  StatisticEntry *last_5min;
  StatisticEntry *last_15min;
  StatisticEntry *total;
};
#define STATISTICS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&statistics__descriptor) \
    , NULL, NULL, NULL, NULL, NULL }


/* AircraftMeta__NavModes methods */
void   aircraft_meta__nav_modes__init
                     (AircraftMeta__NavModes         *message);
/* AircraftMeta__ValidSource methods */
void   aircraft_meta__valid_source__init
                     (AircraftMeta__ValidSource         *message);
/* AircraftMeta methods */
void   aircraft_meta__init
                     (AircraftMeta         *message);
size_t aircraft_meta__get_packed_size
                     (const AircraftMeta   *message);
size_t aircraft_meta__pack
                     (const AircraftMeta   *message,
                      uint8_t             *out);
size_t aircraft_meta__pack_to_buffer
                     (const AircraftMeta   *message,
                      ProtobufCBuffer     *buffer);
AircraftMeta *
       aircraft_meta__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   aircraft_meta__free_unpacked
                     (AircraftMeta *message,
                      ProtobufCAllocator *allocator);
/* AircraftsUpdate methods */
void   aircrafts_update__init
                     (AircraftsUpdate         *message);
size_t aircrafts_update__get_packed_size
                     (const AircraftsUpdate   *message);
size_t aircrafts_update__pack
                     (const AircraftsUpdate   *message,
                      uint8_t             *out);
size_t aircrafts_update__pack_to_buffer
                     (const AircraftsUpdate   *message,
                      ProtobufCBuffer     *buffer);
AircraftsUpdate *
       aircrafts_update__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   aircrafts_update__free_unpacked
                     (AircraftsUpdate *message,
                      ProtobufCAllocator *allocator);
/* Receiver methods */
void   receiver__init
                     (Receiver         *message);
size_t receiver__get_packed_size
                     (const Receiver   *message);
size_t receiver__pack
                     (const Receiver   *message,
                      uint8_t             *out);
size_t receiver__pack_to_buffer
                     (const Receiver   *message,
                      ProtobufCBuffer     *buffer);
Receiver *
       receiver__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   receiver__free_unpacked
                     (Receiver *message,
                      ProtobufCAllocator *allocator);
/* StatisticEntry methods */
void   statistic_entry__init
                     (StatisticEntry         *message);
size_t statistic_entry__get_packed_size
                     (const StatisticEntry   *message);
size_t statistic_entry__pack
                     (const StatisticEntry   *message,
                      uint8_t             *out);
size_t statistic_entry__pack_to_buffer
                     (const StatisticEntry   *message,
                      ProtobufCBuffer     *buffer);
StatisticEntry *
       statistic_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   statistic_entry__free_unpacked
                     (StatisticEntry *message,
                      ProtobufCAllocator *allocator);
/* Statistics methods */
void   statistics__init
                     (Statistics         *message);
size_t statistics__get_packed_size
                     (const Statistics   *message);
size_t statistics__pack
                     (const Statistics   *message,
                      uint8_t             *out);
size_t statistics__pack_to_buffer
                     (const Statistics   *message,
                      ProtobufCBuffer     *buffer);
Statistics *
       statistics__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   statistics__free_unpacked
                     (Statistics *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*AircraftMeta__NavModes_Closure)
                 (const AircraftMeta__NavModes *message,
                  void *closure_data);
typedef void (*AircraftMeta__ValidSource_Closure)
                 (const AircraftMeta__ValidSource *message,
                  void *closure_data);
typedef void (*AircraftMeta_Closure)
                 (const AircraftMeta *message,
                  void *closure_data);
typedef void (*AircraftsUpdate_Closure)
                 (const AircraftsUpdate *message,
                  void *closure_data);
typedef void (*Receiver_Closure)
                 (const Receiver *message,
                  void *closure_data);
typedef void (*StatisticEntry_Closure)
                 (const StatisticEntry *message,
                  void *closure_data);
typedef void (*Statistics_Closure)
                 (const Statistics *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor aircraft_meta__descriptor;
extern const ProtobufCMessageDescriptor aircraft_meta__nav_modes__descriptor;
extern const ProtobufCMessageDescriptor aircraft_meta__valid_source__descriptor;
extern const ProtobufCEnumDescriptor    aircraft_meta__air_ground__descriptor;
extern const ProtobufCEnumDescriptor    aircraft_meta__addr_type__descriptor;
extern const ProtobufCEnumDescriptor    aircraft_meta__emergency__descriptor;
extern const ProtobufCEnumDescriptor    aircraft_meta__sil_type__descriptor;
extern const ProtobufCMessageDescriptor aircrafts_update__descriptor;
extern const ProtobufCMessageDescriptor receiver__descriptor;
extern const ProtobufCMessageDescriptor statistic_entry__descriptor;
extern const ProtobufCMessageDescriptor statistics__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_readsb_2eproto__INCLUDED */
