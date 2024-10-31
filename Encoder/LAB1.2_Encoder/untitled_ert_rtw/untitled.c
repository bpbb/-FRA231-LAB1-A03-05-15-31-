/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled.c
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

#include "untitled.h"
#include "untitled_types.h"
#include "rtwtypes.h"
#include "stm_timer_ll.h"
#include "untitled_private.h"

/* Block signals (default storage) */
B_untitled_T untitled_B;

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Forward declaration for local functions */
static void untitled_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj);
static void untitled_SystemCore_setup_b(stm32cube_blocks_EncoderBlock_T *obj);
static void untitled_SystemCore_setup_b5(stm32cube_blocks_EncoderBlock_T *obj);
static void untitled_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder x1 (QEI)' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM1;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder x1 (QEI)' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder x1 (QEI)' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder x1 (QEI)' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

static void untitled_SystemCore_setup_b(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder x2 (QEI)' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM3;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder x2 (QEI)' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder x2 (QEI)' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder x2 (QEI)' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

static void untitled_SystemCore_setup_b5(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder x4 (QEI)' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM4;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder x4 (QEI)' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder x4 (QEI)' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder x4 (QEI)' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

/* Model step function */
void untitled_step(void)
{
  uint32_T pinReadLoc;

  /* MATLABSystem: '<S8>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

  /* MATLABSystem: '<S8>/Digital Port Read' */
  untitled_B.DigitalPortRead_cq = ((pinReadLoc & 256U) != 0U);

  /* Outport: '<Root>/A1' */
  untitled_Y.A1 = untitled_B.DigitalPortRead_cq;

  /* MATLABSystem: '<S10>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

  /* MATLABSystem: '<S10>/Digital Port Read' */
  untitled_B.DigitalPortRead_p = ((pinReadLoc & 512U) != 0U);

  /* Outport: '<Root>/B1' */
  untitled_Y.B1 = untitled_B.DigitalPortRead_p;

  /* MATLABSystem: '<S14>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

  /* MATLABSystem: '<S14>/Digital Port Read' */
  untitled_B.DigitalPortRead_c = ((pinReadLoc & 1024U) != 0U);

  /* Outport: '<Root>/A2' */
  untitled_Y.A2 = untitled_B.DigitalPortRead_c;

  /* MATLABSystem: '<S16>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOB);

  /* MATLABSystem: '<S16>/Digital Port Read' */
  untitled_B.DigitalPortRead_i = ((pinReadLoc & 1024U) != 0U);

  /* Outport: '<Root>/B2' */
  untitled_Y.B2 = untitled_B.DigitalPortRead_i;

  /* MATLABSystem: '<S20>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOB);

  /* MATLABSystem: '<S20>/Digital Port Read' */
  untitled_B.DigitalPortRead_d = ((pinReadLoc & 32U) != 0U);

  /* Outport: '<Root>/A3' */
  untitled_Y.A3 = untitled_B.DigitalPortRead_d;

  /* MATLABSystem: '<S22>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOB);

  /* MATLABSystem: '<S22>/Digital Port Read' */
  untitled_B.DigitalPortRead = ((pinReadLoc & 16U) != 0U);

  /* Outport: '<Root>/B3' */
  untitled_Y.B3 = untitled_B.DigitalPortRead;

  /* MATLABSystem: '<Root>/Encoder x1 (QEI)' */
  untitled_B.Encoderx1QEI_o1 = getTimerCounterValueForG4
    (untitled_DW.obj_p.TimerHandle, false, NULL);

  /* MATLABSystem: '<Root>/Encoder x1 (QEI)' */
  ouputDirectionOfCounter(untitled_DW.obj_p.TimerHandle);

  /* MATLAB Function: '<Root>/x1 (QEI) Counter' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  if ((untitled_B.Encoderx1QEI_o1 > untitled_DW.prev) ||
      ((untitled_B.Encoderx1QEI_o1 == 0U) && (untitled_DW.prev == 23.0) &&
       (untitled_B.Encoderx1QEI_o1 != 23U) && (untitled_DW.prev != 0.0))) {
    untitled_DW.i++;
  } else if ((untitled_B.Encoderx1QEI_o1 < untitled_DW.prev) ||
             ((untitled_B.Encoderx1QEI_o1 == 23U) && (untitled_DW.prev == 0.0)))
  {
    untitled_DW.i--;
  }

  untitled_DW.prev = untitled_B.Encoderx1QEI_o1;
  untitled_B.count = untitled_DW.i;

  /* End of MATLAB Function: '<Root>/x1 (QEI) Counter' */
  /* MATLABSystem: '<Root>/Encoder x2 (QEI)' */
  untitled_B.Encoderx2QEI_o1 = getTimerCounterValueForG4
    (untitled_DW.obj_h.TimerHandle, false, NULL);

  /* MATLABSystem: '<Root>/Encoder x2 (QEI)' */
  ouputDirectionOfCounter(untitled_DW.obj_h.TimerHandle);

  /* MATLABSystem: '<Root>/Encoder x4 (QEI)' */
  untitled_B.Encoderx4QEI_o1 = getTimerCounterValueForG4
    (untitled_DW.obj.TimerHandle, false, NULL);

  /* MATLABSystem: '<Root>/Encoder x4 (QEI)' */
  ouputDirectionOfCounter(untitled_DW.obj.TimerHandle);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  untitled_M->Timing.taskTime0 =
    ((time_T)(++untitled_M->Timing.clockTick0)) * untitled_M->Timing.stepSize0;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(untitled_M, -1);
  untitled_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  untitled_M->Sizes.checksums[0] = (344303347U);
  untitled_M->Sizes.checksums[1] = (1501049689U);
  untitled_M->Sizes.checksums[2] = (469146303U);
  untitled_M->Sizes.checksums[3] = (3068500586U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[11];
    untitled_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled_M->extModeInfo,
      &untitled_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled_M->extModeInfo, untitled_M->Sizes.checksums);
    rteiSetTPtr(untitled_M->extModeInfo, rtmGetTPtr(untitled_M));
  }

  /* Start for MATLABSystem: '<Root>/Encoder x1 (QEI)' */
  untitled_DW.obj_p.isInitialized = 0;
  untitled_DW.obj_p.matlabCodegenIsDeleted = false;
  untitled_SystemCore_setup(&untitled_DW.obj_p);

  /* Start for MATLABSystem: '<Root>/Encoder x2 (QEI)' */
  untitled_DW.obj_h.isInitialized = 0;
  untitled_DW.obj_h.matlabCodegenIsDeleted = false;
  untitled_SystemCore_setup_b(&untitled_DW.obj_h);

  /* Start for MATLABSystem: '<Root>/Encoder x4 (QEI)' */
  untitled_DW.obj.isInitialized = 0;
  untitled_DW.obj.matlabCodegenIsDeleted = false;
  untitled_SystemCore_setup_b5(&untitled_DW.obj);
}

/* Model terminate function */
void untitled_terminate(void)
{
  uint8_T ChannelInfo;

  /* Terminate for MATLABSystem: '<Root>/Encoder x1 (QEI)' */
  if (!untitled_DW.obj_p.matlabCodegenIsDeleted) {
    untitled_DW.obj_p.matlabCodegenIsDeleted = true;
    if ((untitled_DW.obj_p.isInitialized == 1) &&
        untitled_DW.obj_p.isSetupComplete) {
      disableCounter(untitled_DW.obj_p.TimerHandle);
      disableTimerInterrupts(untitled_DW.obj_p.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(untitled_DW.obj_p.TimerHandle, ChannelInfo);
      disableTimerChannel2(untitled_DW.obj_p.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder x1 (QEI)' */
  /* Terminate for MATLABSystem: '<Root>/Encoder x2 (QEI)' */
  if (!untitled_DW.obj_h.matlabCodegenIsDeleted) {
    untitled_DW.obj_h.matlabCodegenIsDeleted = true;
    if ((untitled_DW.obj_h.isInitialized == 1) &&
        untitled_DW.obj_h.isSetupComplete) {
      disableCounter(untitled_DW.obj_h.TimerHandle);
      disableTimerInterrupts(untitled_DW.obj_h.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(untitled_DW.obj_h.TimerHandle, ChannelInfo);
      disableTimerChannel2(untitled_DW.obj_h.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder x2 (QEI)' */
  /* Terminate for MATLABSystem: '<Root>/Encoder x4 (QEI)' */
  if (!untitled_DW.obj.matlabCodegenIsDeleted) {
    untitled_DW.obj.matlabCodegenIsDeleted = true;
    if ((untitled_DW.obj.isInitialized == 1) && untitled_DW.obj.isSetupComplete)
    {
      disableCounter(untitled_DW.obj.TimerHandle);
      disableTimerInterrupts(untitled_DW.obj.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(untitled_DW.obj.TimerHandle, ChannelInfo);
      disableTimerChannel2(untitled_DW.obj.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder x4 (QEI)' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
