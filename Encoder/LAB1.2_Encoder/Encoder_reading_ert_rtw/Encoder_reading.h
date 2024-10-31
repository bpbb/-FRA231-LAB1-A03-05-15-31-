/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Encoder_reading.h
 *
 * Code generated for Simulink model 'Encoder_reading'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Oct 31 19:53:00 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Encoder_reading_h_
#define Encoder_reading_h_
#ifndef Encoder_reading_COMMON_INCLUDES_
#define Encoder_reading_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "ext_mode.h"
#include "main.h"
#endif                                 /* Encoder_reading_COMMON_INCLUDES_ */

#include "Encoder_reading_types.h"
#include "rtGetInf.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block states (default storage) for system '<Root>/Angle x1 (Polling)' */
typedef struct {
  int32_T sfEvent;                     /* '<Root>/Angle x1 (Polling)' */
  boolean_T doneDoubleBufferReInit;    /* '<Root>/Angle x1 (Polling)' */
} DW_Anglex1Polling_Encoder_rea_T;

/* Block states (default storage) for system '<Root>/Angle x2 (Polling)' */
typedef struct {
  int32_T sfEvent;                     /* '<Root>/Angle x2 (Polling)' */
  boolean_T doneDoubleBufferReInit;    /* '<Root>/Angle x2 (Polling)' */
} DW_Anglex2Polling_Encoder_rea_T;

/* Block signals (default storage) */
typedef struct {
  real_T AngularVelocityx2Polling;     /* '<Root>/Derivative7' */
  real_T AngularAccelerationx2Polling; /* '<Root>/Derivative10' */
  real_T AngularVelocityx1Polling;     /* '<Root>/Derivative6' */
  real_T AngularAccerelationx1Polling; /* '<Root>/Derivative9' */
  real_T AngularVelocityx4Polling;     /* '<Root>/Derivative8' */
  real_T AngularAccelerationx4Polling; /* '<Root>/Derivative11' */
  real_T AngularVelocityx1QEI;         /* '<Root>/Derivative' */
  real_T AngularAccerelationx1QEI;     /* '<Root>/Derivative3' */
  real_T AngularVelocityx2QEI;         /* '<Root>/Derivative1' */
  real_T AngularAccerelationx2QEI;     /* '<Root>/Derivative4' */
  real_T AngularVelocityx4QEI;         /* '<Root>/Derivative2' */
  real_T AngularAccerelationx4QEI;     /* '<Root>/Derivative5' */
  real_T count;                        /* '<Root>/Counter x4 (QEI)' */
  real_T count_p;                      /* '<Root>/Counter x4 (Polling)' */
  real_T count_f;                      /* '<Root>/Counter x2 (QEI)' */
  real_T count_pm;                     /* '<Root>/Counter x2 (Polling)' */
  real_T count_l;                      /* '<Root>/Counter x1 (QEI)' */
  real_T count_c;                      /* '<Root>/Counter x1 (Polling)' */
  real_T angle;                        /* '<Root>/Angle x4 (Polling)' */
  real_T angle_o;                      /* '<Root>/Angle x3 (QEI)' */
  real_T angle_g;                      /* '<Root>/Angle x2 (QEI)' */
  real_T angle_d;                      /* '<Root>/Angle x2 (Polling)' */
  real_T angle_n;                      /* '<Root>/Angle x1 (QEI)' */
  real_T angle_e;                      /* '<Root>/Angle x1 (Polling)' */
  uint32_T Encoderx4QEI_o1;            /* '<Root>/Encoder x4 (QEI)' */
  uint32_T Encoderx2QEI_o1;            /* '<Root>/Encoder x2 (QEI)' */
  uint32_T Encoderx1QEI_o1;            /* '<Root>/Encoder x1 (QEI)' */
  boolean_T Dirx4QEI;                  /* '<Root>/Encoder x4 (QEI)' */
  boolean_T Dirx2QEI;                  /* '<Root>/Encoder x2 (QEI)' */
  boolean_T Dirx1QEI;                  /* '<Root>/Encoder x1 (QEI)' */
  boolean_T DigitalPortRead;           /* '<S22>/Digital Port Read' */
  boolean_T DigitalPortRead_c;         /* '<S20>/Digital Port Read' */
} B_Encoder_reading_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_EncoderBlock_T obj; /* '<Root>/Encoder x4 (QEI)' */
  stm32cube_blocks_EncoderBlock_T obj_h;/* '<Root>/Encoder x2 (QEI)' */
  stm32cube_blocks_EncoderBlock_T obj_p;/* '<Root>/Encoder x1 (QEI)' */
  real_T TimeStampA;                   /* '<Root>/Derivative7' */
  real_T LastUAtTimeA;                 /* '<Root>/Derivative7' */
  real_T TimeStampB;                   /* '<Root>/Derivative7' */
  real_T LastUAtTimeB;                 /* '<Root>/Derivative7' */
  real_T TimeStampA_b;                 /* '<Root>/Derivative10' */
  real_T LastUAtTimeA_k;               /* '<Root>/Derivative10' */
  real_T TimeStampB_d;                 /* '<Root>/Derivative10' */
  real_T LastUAtTimeB_n;               /* '<Root>/Derivative10' */
  real_T TimeStampA_b2;                /* '<Root>/Derivative6' */
  real_T LastUAtTimeA_c;               /* '<Root>/Derivative6' */
  real_T TimeStampB_c;                 /* '<Root>/Derivative6' */
  real_T LastUAtTimeB_a;               /* '<Root>/Derivative6' */
  real_T TimeStampA_k;                 /* '<Root>/Derivative9' */
  real_T LastUAtTimeA_i;               /* '<Root>/Derivative9' */
  real_T TimeStampB_f;                 /* '<Root>/Derivative9' */
  real_T LastUAtTimeB_o;               /* '<Root>/Derivative9' */
  real_T TimeStampA_g;                 /* '<Root>/Derivative8' */
  real_T LastUAtTimeA_a;               /* '<Root>/Derivative8' */
  real_T TimeStampB_n;                 /* '<Root>/Derivative8' */
  real_T LastUAtTimeB_od;              /* '<Root>/Derivative8' */
  real_T TimeStampA_kt;                /* '<Root>/Derivative11' */
  real_T LastUAtTimeA_f;               /* '<Root>/Derivative11' */
  real_T TimeStampB_g;                 /* '<Root>/Derivative11' */
  real_T LastUAtTimeB_m;               /* '<Root>/Derivative11' */
  real_T TimeStampA_a;                 /* '<Root>/Derivative' */
  real_T LastUAtTimeA_iw;              /* '<Root>/Derivative' */
  real_T TimeStampB_dw;                /* '<Root>/Derivative' */
  real_T LastUAtTimeB_g;               /* '<Root>/Derivative' */
  real_T TimeStampA_d;                 /* '<Root>/Derivative3' */
  real_T LastUAtTimeA_h;               /* '<Root>/Derivative3' */
  real_T TimeStampB_p;                 /* '<Root>/Derivative3' */
  real_T LastUAtTimeB_p;               /* '<Root>/Derivative3' */
  real_T TimeStampA_c;                 /* '<Root>/Derivative1' */
  real_T LastUAtTimeA_h1;              /* '<Root>/Derivative1' */
  real_T TimeStampB_dn;                /* '<Root>/Derivative1' */
  real_T LastUAtTimeB_pq;              /* '<Root>/Derivative1' */
  real_T TimeStampA_n;                 /* '<Root>/Derivative4' */
  real_T LastUAtTimeA_j;               /* '<Root>/Derivative4' */
  real_T TimeStampB_b;                 /* '<Root>/Derivative4' */
  real_T LastUAtTimeB_md;              /* '<Root>/Derivative4' */
  real_T TimeStampA_ne;                /* '<Root>/Derivative2' */
  real_T LastUAtTimeA_c5;              /* '<Root>/Derivative2' */
  real_T TimeStampB_l;                 /* '<Root>/Derivative2' */
  real_T LastUAtTimeB_d;               /* '<Root>/Derivative2' */
  real_T TimeStampA_m;                 /* '<Root>/Derivative5' */
  real_T LastUAtTimeA_g;               /* '<Root>/Derivative5' */
  real_T TimeStampB_ne;                /* '<Root>/Derivative5' */
  real_T LastUAtTimeB_b;               /* '<Root>/Derivative5' */
  real_T i;                            /* '<Root>/Counter x4 (QEI)' */
  real_T prev;                         /* '<Root>/Counter x4 (QEI)' */
  real_T i_d;                          /* '<Root>/Counter x4 (Polling)' */
  real_T i_l;                          /* '<Root>/Counter x2 (QEI)' */
  real_T prev_g;                       /* '<Root>/Counter x2 (QEI)' */
  real_T i_i;                          /* '<Root>/Counter x2 (Polling)' */
  real_T i_c;                          /* '<Root>/Counter x1 (QEI)' */
  real_T prev_l;                       /* '<Root>/Counter x1 (QEI)' */
  real_T i_e;                          /* '<Root>/Counter x1 (Polling)' */
  boolean_T lastA;                     /* '<Root>/Counter x4 (Polling)' */
  boolean_T lastB;                     /* '<Root>/Counter x4 (Polling)' */
  boolean_T lastA_g;                   /* '<Root>/Counter x2 (Polling)' */
  boolean_T lastA_o;                   /* '<Root>/Counter x1 (Polling)' */
  DW_Anglex2Polling_Encoder_rea_T sf_Anglex4Polling;/* '<Root>/Angle x4 (Polling)' */
  DW_Anglex2Polling_Encoder_rea_T sf_Anglex3QEI;/* '<Root>/Angle x3 (QEI)' */
  DW_Anglex2Polling_Encoder_rea_T sf_Anglex2QEI;/* '<Root>/Angle x2 (QEI)' */
  DW_Anglex2Polling_Encoder_rea_T sf_Anglex2Polling;/* '<Root>/Angle x2 (Polling)' */
  DW_Anglex1Polling_Encoder_rea_T sf_Anglex1QEI;/* '<Root>/Angle x1 (QEI)' */
  DW_Anglex1Polling_Encoder_rea_T sf_Anglex1Polling;/* '<Root>/Angle x1 (Polling)' */
} DW_Encoder_reading_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Gain2;                  /* '<Root>/Gain2' */
  const real_T Gain;                   /* '<Root>/Gain' */
  const real_T Gain1;                  /* '<Root>/Gain1' */
  const real_T Gain3;                  /* '<Root>/Gain3' */
} ConstB_Encoder_reading_T;

/* Real-time Model Data Structure */
struct tag_RTM_Encoder_reading_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals (default storage) */
extern B_Encoder_reading_T Encoder_reading_B;

/* Block states (default storage) */
extern DW_Encoder_reading_T Encoder_reading_DW;
extern const ConstB_Encoder_reading_T Encoder_reading_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void Encoder_reading_initialize(void);
extern void Encoder_reading_step(void);
extern void Encoder_reading_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Encoder_reading_T *const Encoder_reading_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Encoder_reading'
 * '<S1>'   : 'Encoder_reading/Angle x1 (Polling)'
 * '<S2>'   : 'Encoder_reading/Angle x1 (QEI)'
 * '<S3>'   : 'Encoder_reading/Angle x2 (Polling)'
 * '<S4>'   : 'Encoder_reading/Angle x2 (QEI)'
 * '<S5>'   : 'Encoder_reading/Angle x3 (QEI)'
 * '<S6>'   : 'Encoder_reading/Angle x4 (Polling)'
 * '<S7>'   : 'Encoder_reading/Counter x1 (Polling)'
 * '<S8>'   : 'Encoder_reading/Counter x1 (QEI)'
 * '<S9>'   : 'Encoder_reading/Counter x2 (Polling)'
 * '<S10>'  : 'Encoder_reading/Counter x2 (QEI)'
 * '<S11>'  : 'Encoder_reading/Counter x4 (Polling)'
 * '<S12>'  : 'Encoder_reading/Counter x4 (QEI)'
 * '<S13>'  : 'Encoder_reading/Digital Port Read'
 * '<S14>'  : 'Encoder_reading/Encoder x1 (Polling)'
 * '<S15>'  : 'Encoder_reading/Digital Port Read/ECSoC'
 * '<S16>'  : 'Encoder_reading/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S17>'  : 'Encoder_reading/Encoder x1 (Polling)/A1'
 * '<S18>'  : 'Encoder_reading/Encoder x1 (Polling)/B1'
 * '<S19>'  : 'Encoder_reading/Encoder x1 (Polling)/A1/ECSoC'
 * '<S20>'  : 'Encoder_reading/Encoder x1 (Polling)/A1/ECSoC/ECSimCodegen'
 * '<S21>'  : 'Encoder_reading/Encoder x1 (Polling)/B1/ECSoC'
 * '<S22>'  : 'Encoder_reading/Encoder x1 (Polling)/B1/ECSoC/ECSimCodegen'
 */
#endif                                 /* Encoder_reading_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
