/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled.h
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sun Oct 27 20:14:55 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef untitled_h_
#define untitled_h_
#ifndef untitled_COMMON_INCLUDES_
#define untitled_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "math.h"
#include "main.h"
#endif                                 /* untitled_COMMON_INCLUDES_ */

#include "untitled_types.h"
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
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T count;                        /* '<Root>/x1 (QEI) Counter' */
  uint32_T Encoderx4QEI_o1;            /* '<Root>/Encoder x4 (QEI)' */
  uint32_T Encoderx2QEI_o1;            /* '<Root>/Encoder x2 (QEI)' */
  uint32_T Encoderx1QEI_o1;            /* '<Root>/Encoder x1 (QEI)' */
  boolean_T DigitalPortRead;           /* '<S22>/Digital Port Read' */
  boolean_T DigitalPortRead_d;         /* '<S20>/Digital Port Read' */
  boolean_T DigitalPortRead_i;         /* '<S16>/Digital Port Read' */
  boolean_T DigitalPortRead_c;         /* '<S14>/Digital Port Read' */
  boolean_T DigitalPortRead_p;         /* '<S10>/Digital Port Read' */
  boolean_T DigitalPortRead_cq;        /* '<S8>/Digital Port Read' */
} B_untitled_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_EncoderBlock_T obj; /* '<Root>/Encoder x4 (QEI)' */
  stm32cube_blocks_EncoderBlock_T obj_h;/* '<Root>/Encoder x2 (QEI)' */
  stm32cube_blocks_EncoderBlock_T obj_p;/* '<Root>/Encoder x1 (QEI)' */
  real_T i;                            /* '<Root>/x1 (QEI) Counter' */
  real_T prev;                         /* '<Root>/x1 (QEI) Counter' */
} DW_untitled_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T A1;                        /* '<Root>/A1' */
  boolean_T A2;                        /* '<Root>/A2' */
  boolean_T A3;                        /* '<Root>/A3' */
  boolean_T B1;                        /* '<Root>/B1' */
  boolean_T B2;                        /* '<Root>/B2' */
  boolean_T B3;                        /* '<Root>/B3' */
} ExtY_untitled_T;

/* Real-time Model Data Structure */
struct tag_RTM_untitled_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

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
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block signals (default storage) */
extern B_untitled_T untitled_B;

/* Block states (default storage) */
extern DW_untitled_T untitled_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_untitled_T untitled_Y;

/* Model entry point functions */
extern void untitled_initialize(void);
extern void untitled_step(void);
extern void untitled_terminate(void);

/* Real-time Model object */
extern RT_MODEL_untitled_T *const untitled_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Data Type Conversion1' : Unused code path elimination
 * Block '<Root>/Data Type Conversion2' : Unused code path elimination
 */

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
 * '<Root>' : 'untitled'
 * '<S1>'   : 'untitled/Encoder x1 (Polling)'
 * '<S2>'   : 'untitled/Encoder x2 (Polling)'
 * '<S3>'   : 'untitled/Encoder x4 (Polling)'
 * '<S4>'   : 'untitled/x1 (QEI) Counter'
 * '<S5>'   : 'untitled/Encoder x1 (Polling)/A1'
 * '<S6>'   : 'untitled/Encoder x1 (Polling)/B1'
 * '<S7>'   : 'untitled/Encoder x1 (Polling)/A1/ECSoC'
 * '<S8>'   : 'untitled/Encoder x1 (Polling)/A1/ECSoC/ECSimCodegen'
 * '<S9>'   : 'untitled/Encoder x1 (Polling)/B1/ECSoC'
 * '<S10>'  : 'untitled/Encoder x1 (Polling)/B1/ECSoC/ECSimCodegen'
 * '<S11>'  : 'untitled/Encoder x2 (Polling)/A2'
 * '<S12>'  : 'untitled/Encoder x2 (Polling)/B2'
 * '<S13>'  : 'untitled/Encoder x2 (Polling)/A2/ECSoC'
 * '<S14>'  : 'untitled/Encoder x2 (Polling)/A2/ECSoC/ECSimCodegen'
 * '<S15>'  : 'untitled/Encoder x2 (Polling)/B2/ECSoC'
 * '<S16>'  : 'untitled/Encoder x2 (Polling)/B2/ECSoC/ECSimCodegen'
 * '<S17>'  : 'untitled/Encoder x4 (Polling)/A3'
 * '<S18>'  : 'untitled/Encoder x4 (Polling)/B3'
 * '<S19>'  : 'untitled/Encoder x4 (Polling)/A3/ECSoC'
 * '<S20>'  : 'untitled/Encoder x4 (Polling)/A3/ECSoC/ECSimCodegen'
 * '<S21>'  : 'untitled/Encoder x4 (Polling)/B3/ECSoC'
 * '<S22>'  : 'untitled/Encoder x4 (Polling)/B3/ECSoC/ECSimCodegen'
 */
#endif                                 /* untitled_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
