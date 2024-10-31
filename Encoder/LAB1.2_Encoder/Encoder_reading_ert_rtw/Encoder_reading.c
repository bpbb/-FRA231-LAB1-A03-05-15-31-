/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Encoder_reading.c
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

#include "Encoder_reading.h"
#include "rtwtypes.h"
#include "Encoder_reading_types.h"
#include "Encoder_reading_private.h"
#include "stm_timer_ll.h"

/* Named constants for MATLAB Function: '<Root>/Angle x1 (Polling)' */
#define Encoder_reading_CALL_EVENT     (-1)

/* Named constants for MATLAB Function: '<Root>/Angle x2 (Polling)' */
#define Encoder_reading_CALL_EVENT_e   (-1)

/* Block signals (default storage) */
B_Encoder_reading_T Encoder_reading_B;

/* Block states (default storage) */
DW_Encoder_reading_T Encoder_reading_DW;

/* Real-time model */
static RT_MODEL_Encoder_reading_T Encoder_reading_M_;
RT_MODEL_Encoder_reading_T *const Encoder_reading_M = &Encoder_reading_M_;

/* Forward declaration for local functions */
static void Encoder_readin_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj);
static void Encoder_read_SystemCore_setup_c(stm32cube_blocks_EncoderBlock_T *obj);
static void Encoder_rea_SystemCore_setup_c3(stm32cube_blocks_EncoderBlock_T *obj);

/*
 * System initialize for atomic system:
 *    '<Root>/Angle x1 (Polling)'
 *    '<Root>/Angle x1 (QEI)'
 */
void Encoder_rea_Anglex1Polling_Init(DW_Anglex1Polling_Encoder_rea_T *localDW)
{
  localDW->sfEvent = Encoder_reading_CALL_EVENT;
}

/*
 * Output and update for atomic system:
 *    '<Root>/Angle x1 (Polling)'
 *    '<Root>/Angle x1 (QEI)'
 */
void Encoder_reading_Anglex1Polling(real_T rtu_count, real_T
  rtu_countsPerRevolution, real_T *rty_angle, DW_Anglex1Polling_Encoder_rea_T
  *localDW)
{
  localDW->sfEvent = Encoder_reading_CALL_EVENT;
  *rty_angle = rtu_count / rtu_countsPerRevolution * 2.0 * 3.1415926535897931;
}

/*
 * System initialize for atomic system:
 *    '<Root>/Angle x2 (Polling)'
 *    '<Root>/Angle x2 (QEI)'
 *    '<Root>/Angle x3 (QEI)'
 *    '<Root>/Angle x4 (Polling)'
 */
void Encoder_rea_Anglex2Polling_Init(DW_Anglex2Polling_Encoder_rea_T *localDW)
{
  localDW->sfEvent = Encoder_reading_CALL_EVENT_e;
}

/*
 * Output and update for atomic system:
 *    '<Root>/Angle x2 (Polling)'
 *    '<Root>/Angle x2 (QEI)'
 *    '<Root>/Angle x3 (QEI)'
 *    '<Root>/Angle x4 (Polling)'
 */
void Encoder_reading_Anglex2Polling(real_T rtu_count, real_T
  rtu_countsPerRevolution, real_T *rty_angle, DW_Anglex2Polling_Encoder_rea_T
  *localDW)
{
  localDW->sfEvent = Encoder_reading_CALL_EVENT_e;
  *rty_angle = rtu_count / rtu_countsPerRevolution * 2.0 * 3.1415926535897931;
}

static void Encoder_readin_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj)
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

static void Encoder_read_SystemCore_setup_c(stm32cube_blocks_EncoderBlock_T *obj)
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

static void Encoder_rea_SystemCore_setup_c3(stm32cube_blocks_EncoderBlock_T *obj)
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
void Encoder_reading_step(void)
{
  {
    real_T diff;
    real_T tmp;
    real_T *lastU;
    uint32_T pinReadLoc;
    boolean_T rtb_DigitalPortRead;

    /* MATLABSystem: '<S20>/Digital Port Read' */
    pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

    /* MATLABSystem: '<S20>/Digital Port Read' */
    Encoder_reading_B.DigitalPortRead_c = ((pinReadLoc & 256U) != 0U);

    /* MATLABSystem: '<S22>/Digital Port Read' */
    pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

    /* MATLABSystem: '<S22>/Digital Port Read' */
    Encoder_reading_B.DigitalPortRead = ((pinReadLoc & 512U) != 0U);

    /* MATLABSystem: '<S16>/Digital Port Read' */
    pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);
    rtb_DigitalPortRead = ((pinReadLoc & 8192U) != 0U);

    /* MATLAB Function: '<Root>/Counter x2 (Polling)' */
    if (rtb_DigitalPortRead) {
      Encoder_reading_DW.i_i = 0.0;
    }

    if (Encoder_reading_B.DigitalPortRead_c != Encoder_reading_DW.lastA_g) {
      if (Encoder_reading_B.DigitalPortRead_c) {
        if (!Encoder_reading_B.DigitalPortRead) {
          Encoder_reading_DW.i_i++;
        } else {
          Encoder_reading_DW.i_i--;
        }
      } else if (Encoder_reading_B.DigitalPortRead) {
        Encoder_reading_DW.i_i++;
      } else {
        Encoder_reading_DW.i_i--;
      }
    }

    Encoder_reading_DW.lastA_g = Encoder_reading_B.DigitalPortRead_c;
    Encoder_reading_B.count_pm = Encoder_reading_DW.i_i;

    /* End of MATLAB Function: '<Root>/Counter x2 (Polling)' */

    /* MATLAB Function: '<Root>/Angle x2 (Polling)' */
    Encoder_reading_Anglex2Polling(Encoder_reading_B.count_pm,
      Encoder_reading_ConstB.Gain2, &Encoder_reading_B.angle_d,
      &Encoder_reading_DW.sf_Anglex2Polling);

    /* Derivative: '<Root>/Derivative7' incorporates:
     *  Derivative: '<Root>/Derivative'
     *  Derivative: '<Root>/Derivative1'
     *  Derivative: '<Root>/Derivative10'
     *  Derivative: '<Root>/Derivative11'
     *  Derivative: '<Root>/Derivative2'
     *  Derivative: '<Root>/Derivative3'
     *  Derivative: '<Root>/Derivative4'
     *  Derivative: '<Root>/Derivative5'
     *  Derivative: '<Root>/Derivative6'
     *  Derivative: '<Root>/Derivative8'
     *  Derivative: '<Root>/Derivative9'
     */
    tmp = Encoder_reading_M->Timing.t[0];
    if ((Encoder_reading_DW.TimeStampA >= tmp) && (Encoder_reading_DW.TimeStampB
         >= tmp)) {
      /* Derivative: '<Root>/Derivative7' */
      Encoder_reading_B.AngularVelocityx2Polling = 0.0;
    } else {
      diff = Encoder_reading_DW.TimeStampA;
      lastU = &Encoder_reading_DW.LastUAtTimeA;
      if (Encoder_reading_DW.TimeStampA < Encoder_reading_DW.TimeStampB) {
        if (Encoder_reading_DW.TimeStampB < tmp) {
          diff = Encoder_reading_DW.TimeStampB;
          lastU = &Encoder_reading_DW.LastUAtTimeB;
        }
      } else if (Encoder_reading_DW.TimeStampA >= tmp) {
        diff = Encoder_reading_DW.TimeStampB;
        lastU = &Encoder_reading_DW.LastUAtTimeB;
      }

      /* Derivative: '<Root>/Derivative7' */
      Encoder_reading_B.AngularVelocityx2Polling = (Encoder_reading_B.angle_d - *
        lastU) / (tmp - diff);
    }

    /* End of Derivative: '<Root>/Derivative7' */
    /* Derivative: '<Root>/Derivative10' */
    if ((Encoder_reading_DW.TimeStampA_b >= tmp) &&
        (Encoder_reading_DW.TimeStampB_d >= tmp)) {
      /* Derivative: '<Root>/Derivative10' */
      Encoder_reading_B.AngularAccelerationx2Polling = 0.0;
    } else {
      diff = Encoder_reading_DW.TimeStampA_b;
      lastU = &Encoder_reading_DW.LastUAtTimeA_k;
      if (Encoder_reading_DW.TimeStampA_b < Encoder_reading_DW.TimeStampB_d) {
        if (Encoder_reading_DW.TimeStampB_d < tmp) {
          diff = Encoder_reading_DW.TimeStampB_d;
          lastU = &Encoder_reading_DW.LastUAtTimeB_n;
        }
      } else if (Encoder_reading_DW.TimeStampA_b >= tmp) {
        diff = Encoder_reading_DW.TimeStampB_d;
        lastU = &Encoder_reading_DW.LastUAtTimeB_n;
      }

      /* Derivative: '<Root>/Derivative10' */
      Encoder_reading_B.AngularAccelerationx2Polling =
        (Encoder_reading_B.AngularVelocityx2Polling - *lastU) / (tmp - diff);
    }

    /* MATLAB Function: '<Root>/Counter x1 (Polling)' */
    if (rtb_DigitalPortRead) {
      Encoder_reading_DW.i_e = 0.0;
    }

    if (Encoder_reading_B.DigitalPortRead_c != Encoder_reading_DW.lastA_o) {
      if (Encoder_reading_B.DigitalPortRead_c &&
          (!Encoder_reading_B.DigitalPortRead)) {
        Encoder_reading_DW.i_e++;
      } else if (Encoder_reading_B.DigitalPortRead_c &&
                 Encoder_reading_B.DigitalPortRead) {
        Encoder_reading_DW.i_e--;
      }
    }

    Encoder_reading_DW.lastA_o = Encoder_reading_B.DigitalPortRead_c;
    Encoder_reading_B.count_c = Encoder_reading_DW.i_e;

    /* End of MATLAB Function: '<Root>/Counter x1 (Polling)' */

    /* MATLAB Function: '<Root>/Angle x1 (Polling)' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    Encoder_reading_Anglex1Polling(Encoder_reading_B.count_c, 2048.0,
      &Encoder_reading_B.angle_e, &Encoder_reading_DW.sf_Anglex1Polling);

    /* Derivative: '<Root>/Derivative6' */
    if ((Encoder_reading_DW.TimeStampA_b2 >= tmp) &&
        (Encoder_reading_DW.TimeStampB_c >= tmp)) {
      /* Derivative: '<Root>/Derivative6' */
      Encoder_reading_B.AngularVelocityx1Polling = 0.0;
    } else {
      diff = Encoder_reading_DW.TimeStampA_b2;
      lastU = &Encoder_reading_DW.LastUAtTimeA_c;
      if (Encoder_reading_DW.TimeStampA_b2 < Encoder_reading_DW.TimeStampB_c) {
        if (Encoder_reading_DW.TimeStampB_c < tmp) {
          diff = Encoder_reading_DW.TimeStampB_c;
          lastU = &Encoder_reading_DW.LastUAtTimeB_a;
        }
      } else if (Encoder_reading_DW.TimeStampA_b2 >= tmp) {
        diff = Encoder_reading_DW.TimeStampB_c;
        lastU = &Encoder_reading_DW.LastUAtTimeB_a;
      }

      /* Derivative: '<Root>/Derivative6' */
      Encoder_reading_B.AngularVelocityx1Polling = (Encoder_reading_B.angle_e - *
        lastU) / (tmp - diff);
    }

    /* Derivative: '<Root>/Derivative9' */
    if ((Encoder_reading_DW.TimeStampA_k >= tmp) &&
        (Encoder_reading_DW.TimeStampB_f >= tmp)) {
      /* Derivative: '<Root>/Derivative9' */
      Encoder_reading_B.AngularAccerelationx1Polling = 0.0;
    } else {
      diff = Encoder_reading_DW.TimeStampA_k;
      lastU = &Encoder_reading_DW.LastUAtTimeA_i;
      if (Encoder_reading_DW.TimeStampA_k < Encoder_reading_DW.TimeStampB_f) {
        if (Encoder_reading_DW.TimeStampB_f < tmp) {
          diff = Encoder_reading_DW.TimeStampB_f;
          lastU = &Encoder_reading_DW.LastUAtTimeB_o;
        }
      } else if (Encoder_reading_DW.TimeStampA_k >= tmp) {
        diff = Encoder_reading_DW.TimeStampB_f;
        lastU = &Encoder_reading_DW.LastUAtTimeB_o;
      }

      /* Derivative: '<Root>/Derivative9' */
      Encoder_reading_B.AngularAccerelationx1Polling =
        (Encoder_reading_B.AngularVelocityx1Polling - *lastU) / (tmp - diff);
    }

    /* MATLAB Function: '<Root>/Counter x4 (Polling)' */
    if (rtb_DigitalPortRead) {
      Encoder_reading_DW.i_d = 0.0;
    }

    if ((Encoder_reading_B.DigitalPortRead_c != Encoder_reading_DW.lastA) ||
        (Encoder_reading_B.DigitalPortRead != Encoder_reading_DW.lastB)) {
      if ((!Encoder_reading_DW.lastA) && Encoder_reading_B.DigitalPortRead_c) {
        if (!Encoder_reading_B.DigitalPortRead) {
          Encoder_reading_DW.i_d++;
        } else {
          Encoder_reading_DW.i_d--;
        }
      } else if (Encoder_reading_DW.lastA &&
                 (!Encoder_reading_B.DigitalPortRead_c)) {
        if (Encoder_reading_B.DigitalPortRead) {
          Encoder_reading_DW.i_d++;
        } else {
          Encoder_reading_DW.i_d--;
        }
      } else if ((!Encoder_reading_DW.lastB) &&
                 Encoder_reading_B.DigitalPortRead) {
        if (Encoder_reading_B.DigitalPortRead_c) {
          Encoder_reading_DW.i_d++;
        } else {
          Encoder_reading_DW.i_d--;
        }
      } else if (Encoder_reading_DW.lastB && (!Encoder_reading_B.DigitalPortRead))
      {
        if (!Encoder_reading_B.DigitalPortRead_c) {
          Encoder_reading_DW.i_d++;
        } else {
          Encoder_reading_DW.i_d--;
        }
      }
    }

    Encoder_reading_DW.lastA = Encoder_reading_B.DigitalPortRead_c;
    Encoder_reading_DW.lastB = Encoder_reading_B.DigitalPortRead;
    Encoder_reading_B.count_p = Encoder_reading_DW.i_d;

    /* End of MATLAB Function: '<Root>/Counter x4 (Polling)' */

    /* MATLAB Function: '<Root>/Angle x4 (Polling)' */
    Encoder_reading_Anglex2Polling(Encoder_reading_B.count_p,
      Encoder_reading_ConstB.Gain3, &Encoder_reading_B.angle,
      &Encoder_reading_DW.sf_Anglex4Polling);

    /* Derivative: '<Root>/Derivative8' */
    if ((Encoder_reading_DW.TimeStampA_g >= tmp) &&
        (Encoder_reading_DW.TimeStampB_n >= tmp)) {
      /* Derivative: '<Root>/Derivative8' */
      Encoder_reading_B.AngularVelocityx4Polling = 0.0;
    } else {
      diff = Encoder_reading_DW.TimeStampA_g;
      lastU = &Encoder_reading_DW.LastUAtTimeA_a;
      if (Encoder_reading_DW.TimeStampA_g < Encoder_reading_DW.TimeStampB_n) {
        if (Encoder_reading_DW.TimeStampB_n < tmp) {
          diff = Encoder_reading_DW.TimeStampB_n;
          lastU = &Encoder_reading_DW.LastUAtTimeB_od;
        }
      } else if (Encoder_reading_DW.TimeStampA_g >= tmp) {
        diff = Encoder_reading_DW.TimeStampB_n;
        lastU = &Encoder_reading_DW.LastUAtTimeB_od;
      }

      /* Derivative: '<Root>/Derivative8' */
      Encoder_reading_B.AngularVelocityx4Polling = (Encoder_reading_B.angle -
        *lastU) / (tmp - diff);
    }

    /* Derivative: '<Root>/Derivative11' */
    if ((Encoder_reading_DW.TimeStampA_kt >= tmp) &&
        (Encoder_reading_DW.TimeStampB_g >= tmp)) {
      /* Derivative: '<Root>/Derivative11' */
      Encoder_reading_B.AngularAccelerationx4Polling = 0.0;
    } else {
      diff = Encoder_reading_DW.TimeStampA_kt;
      lastU = &Encoder_reading_DW.LastUAtTimeA_f;
      if (Encoder_reading_DW.TimeStampA_kt < Encoder_reading_DW.TimeStampB_g) {
        if (Encoder_reading_DW.TimeStampB_g < tmp) {
          diff = Encoder_reading_DW.TimeStampB_g;
          lastU = &Encoder_reading_DW.LastUAtTimeB_m;
        }
      } else if (Encoder_reading_DW.TimeStampA_kt >= tmp) {
        diff = Encoder_reading_DW.TimeStampB_g;
        lastU = &Encoder_reading_DW.LastUAtTimeB_m;
      }

      /* Derivative: '<Root>/Derivative11' */
      Encoder_reading_B.AngularAccelerationx4Polling =
        (Encoder_reading_B.AngularVelocityx4Polling - *lastU) / (tmp - diff);
    }

    /* MATLABSystem: '<Root>/Encoder x1 (QEI)' */
    Encoder_reading_B.Encoderx1QEI_o1 = getTimerCounterValueForG4
      (Encoder_reading_DW.obj_p.TimerHandle, false, NULL);

    /* MATLABSystem: '<Root>/Encoder x1 (QEI)' */
    Encoder_reading_B.Dirx1QEI = ouputDirectionOfCounter
      (Encoder_reading_DW.obj_p.TimerHandle);

    /* MATLAB Function: '<Root>/Counter x1 (QEI)' incorporates:
     *  DataTypeConversion: '<Root>/Data Type Conversion'
     */
    if (rtb_DigitalPortRead) {
      Encoder_reading_DW.i_c = 0.0;
    }

    diff = (real_T)Encoder_reading_B.Encoderx1QEI_o1 - Encoder_reading_DW.prev_l;
    if (diff > 32760.0) {
      Encoder_reading_DW.i_c = (Encoder_reading_DW.i_c - (65520.0 - diff)) - 1.0;
    } else if (diff < -32760.0) {
      Encoder_reading_DW.i_c = ((diff + 65520.0) + Encoder_reading_DW.i_c) + 1.0;
    } else {
      Encoder_reading_DW.i_c += diff;
    }

    Encoder_reading_DW.prev_l = Encoder_reading_B.Encoderx1QEI_o1;
    Encoder_reading_B.count_l = Encoder_reading_DW.i_c;

    /* End of MATLAB Function: '<Root>/Counter x1 (QEI)' */

    /* MATLAB Function: '<Root>/Angle x1 (QEI)' incorporates:
     *  Constant: '<Root>/Constant'
     */
    Encoder_reading_Anglex1Polling(Encoder_reading_B.count_l, 2048.0,
      &Encoder_reading_B.angle_n, &Encoder_reading_DW.sf_Anglex1QEI);

    /* Derivative: '<Root>/Derivative' */
    if ((Encoder_reading_DW.TimeStampA_a >= tmp) &&
        (Encoder_reading_DW.TimeStampB_dw >= tmp)) {
      /* Derivative: '<Root>/Derivative' */
      Encoder_reading_B.AngularVelocityx1QEI = 0.0;
    } else {
      diff = Encoder_reading_DW.TimeStampA_a;
      lastU = &Encoder_reading_DW.LastUAtTimeA_iw;
      if (Encoder_reading_DW.TimeStampA_a < Encoder_reading_DW.TimeStampB_dw) {
        if (Encoder_reading_DW.TimeStampB_dw < tmp) {
          diff = Encoder_reading_DW.TimeStampB_dw;
          lastU = &Encoder_reading_DW.LastUAtTimeB_g;
        }
      } else if (Encoder_reading_DW.TimeStampA_a >= tmp) {
        diff = Encoder_reading_DW.TimeStampB_dw;
        lastU = &Encoder_reading_DW.LastUAtTimeB_g;
      }

      /* Derivative: '<Root>/Derivative' */
      Encoder_reading_B.AngularVelocityx1QEI = (Encoder_reading_B.angle_n -
        *lastU) / (tmp - diff);
    }

    /* Derivative: '<Root>/Derivative3' */
    if ((Encoder_reading_DW.TimeStampA_d >= tmp) &&
        (Encoder_reading_DW.TimeStampB_p >= tmp)) {
      /* Derivative: '<Root>/Derivative3' */
      Encoder_reading_B.AngularAccerelationx1QEI = 0.0;
    } else {
      diff = Encoder_reading_DW.TimeStampA_d;
      lastU = &Encoder_reading_DW.LastUAtTimeA_h;
      if (Encoder_reading_DW.TimeStampA_d < Encoder_reading_DW.TimeStampB_p) {
        if (Encoder_reading_DW.TimeStampB_p < tmp) {
          diff = Encoder_reading_DW.TimeStampB_p;
          lastU = &Encoder_reading_DW.LastUAtTimeB_p;
        }
      } else if (Encoder_reading_DW.TimeStampA_d >= tmp) {
        diff = Encoder_reading_DW.TimeStampB_p;
        lastU = &Encoder_reading_DW.LastUAtTimeB_p;
      }

      /* Derivative: '<Root>/Derivative3' */
      Encoder_reading_B.AngularAccerelationx1QEI =
        (Encoder_reading_B.AngularVelocityx1QEI - *lastU) / (tmp - diff);
    }

    /* MATLABSystem: '<Root>/Encoder x2 (QEI)' */
    Encoder_reading_B.Encoderx2QEI_o1 = getTimerCounterValueForG4
      (Encoder_reading_DW.obj_h.TimerHandle, false, NULL);

    /* MATLABSystem: '<Root>/Encoder x2 (QEI)' */
    Encoder_reading_B.Dirx2QEI = ouputDirectionOfCounter
      (Encoder_reading_DW.obj_h.TimerHandle);

    /* MATLAB Function: '<Root>/Counter x2 (QEI)' incorporates:
     *  DataTypeConversion: '<Root>/Data Type Conversion1'
     */
    if (rtb_DigitalPortRead) {
      Encoder_reading_DW.i_l = 0.0;
    }

    diff = (real_T)Encoder_reading_B.Encoderx2QEI_o1 - Encoder_reading_DW.prev_g;
    if (diff > 32760.0) {
      Encoder_reading_DW.i_l = (Encoder_reading_DW.i_l - (65520.0 - diff)) - 1.0;
    } else if (diff < -32760.0) {
      Encoder_reading_DW.i_l = ((diff + 65520.0) + Encoder_reading_DW.i_l) + 1.0;
    } else {
      Encoder_reading_DW.i_l += diff;
    }

    Encoder_reading_DW.prev_g = Encoder_reading_B.Encoderx2QEI_o1;
    Encoder_reading_B.count_f = Encoder_reading_DW.i_l;

    /* End of MATLAB Function: '<Root>/Counter x2 (QEI)' */

    /* MATLAB Function: '<Root>/Angle x2 (QEI)' */
    Encoder_reading_Anglex2Polling(Encoder_reading_B.count_f,
      Encoder_reading_ConstB.Gain, &Encoder_reading_B.angle_g,
      &Encoder_reading_DW.sf_Anglex2QEI);

    /* Derivative: '<Root>/Derivative1' */
    if ((Encoder_reading_DW.TimeStampA_c >= tmp) &&
        (Encoder_reading_DW.TimeStampB_dn >= tmp)) {
      /* Derivative: '<Root>/Derivative1' */
      Encoder_reading_B.AngularVelocityx2QEI = 0.0;
    } else {
      diff = Encoder_reading_DW.TimeStampA_c;
      lastU = &Encoder_reading_DW.LastUAtTimeA_h1;
      if (Encoder_reading_DW.TimeStampA_c < Encoder_reading_DW.TimeStampB_dn) {
        if (Encoder_reading_DW.TimeStampB_dn < tmp) {
          diff = Encoder_reading_DW.TimeStampB_dn;
          lastU = &Encoder_reading_DW.LastUAtTimeB_pq;
        }
      } else if (Encoder_reading_DW.TimeStampA_c >= tmp) {
        diff = Encoder_reading_DW.TimeStampB_dn;
        lastU = &Encoder_reading_DW.LastUAtTimeB_pq;
      }

      /* Derivative: '<Root>/Derivative1' */
      Encoder_reading_B.AngularVelocityx2QEI = (Encoder_reading_B.angle_g -
        *lastU) / (tmp - diff);
    }

    /* Derivative: '<Root>/Derivative4' */
    if ((Encoder_reading_DW.TimeStampA_n >= tmp) &&
        (Encoder_reading_DW.TimeStampB_b >= tmp)) {
      /* Derivative: '<Root>/Derivative4' */
      Encoder_reading_B.AngularAccerelationx2QEI = 0.0;
    } else {
      diff = Encoder_reading_DW.TimeStampA_n;
      lastU = &Encoder_reading_DW.LastUAtTimeA_j;
      if (Encoder_reading_DW.TimeStampA_n < Encoder_reading_DW.TimeStampB_b) {
        if (Encoder_reading_DW.TimeStampB_b < tmp) {
          diff = Encoder_reading_DW.TimeStampB_b;
          lastU = &Encoder_reading_DW.LastUAtTimeB_md;
        }
      } else if (Encoder_reading_DW.TimeStampA_n >= tmp) {
        diff = Encoder_reading_DW.TimeStampB_b;
        lastU = &Encoder_reading_DW.LastUAtTimeB_md;
      }

      /* Derivative: '<Root>/Derivative4' */
      Encoder_reading_B.AngularAccerelationx2QEI =
        (Encoder_reading_B.AngularVelocityx2QEI - *lastU) / (tmp - diff);
    }

    /* MATLABSystem: '<Root>/Encoder x4 (QEI)' */
    Encoder_reading_B.Encoderx4QEI_o1 = getTimerCounterValueForG4
      (Encoder_reading_DW.obj.TimerHandle, false, NULL);

    /* MATLABSystem: '<Root>/Encoder x4 (QEI)' */
    Encoder_reading_B.Dirx4QEI = ouputDirectionOfCounter
      (Encoder_reading_DW.obj.TimerHandle);

    /* MATLAB Function: '<Root>/Counter x4 (QEI)' incorporates:
     *  DataTypeConversion: '<Root>/Data Type Conversion2'
     */
    if (rtb_DigitalPortRead) {
      Encoder_reading_DW.i = 0.0;
    }

    diff = (real_T)Encoder_reading_B.Encoderx4QEI_o1 - Encoder_reading_DW.prev;
    if (diff > 32736.0) {
      Encoder_reading_DW.i = (Encoder_reading_DW.i - (65472.0 - diff)) - 1.0;
    } else if (diff < -32736.0) {
      Encoder_reading_DW.i = ((diff + 65472.0) + Encoder_reading_DW.i) + 1.0;
    } else {
      Encoder_reading_DW.i += diff;
    }

    Encoder_reading_DW.prev = Encoder_reading_B.Encoderx4QEI_o1;
    Encoder_reading_B.count = Encoder_reading_DW.i;

    /* End of MATLAB Function: '<Root>/Counter x4 (QEI)' */

    /* MATLAB Function: '<Root>/Angle x3 (QEI)' */
    Encoder_reading_Anglex2Polling(Encoder_reading_B.count,
      Encoder_reading_ConstB.Gain1, &Encoder_reading_B.angle_o,
      &Encoder_reading_DW.sf_Anglex3QEI);

    /* Derivative: '<Root>/Derivative2' */
    if ((Encoder_reading_DW.TimeStampA_ne >= tmp) &&
        (Encoder_reading_DW.TimeStampB_l >= tmp)) {
      /* Derivative: '<Root>/Derivative2' */
      Encoder_reading_B.AngularVelocityx4QEI = 0.0;
    } else {
      diff = Encoder_reading_DW.TimeStampA_ne;
      lastU = &Encoder_reading_DW.LastUAtTimeA_c5;
      if (Encoder_reading_DW.TimeStampA_ne < Encoder_reading_DW.TimeStampB_l) {
        if (Encoder_reading_DW.TimeStampB_l < tmp) {
          diff = Encoder_reading_DW.TimeStampB_l;
          lastU = &Encoder_reading_DW.LastUAtTimeB_d;
        }
      } else if (Encoder_reading_DW.TimeStampA_ne >= tmp) {
        diff = Encoder_reading_DW.TimeStampB_l;
        lastU = &Encoder_reading_DW.LastUAtTimeB_d;
      }

      /* Derivative: '<Root>/Derivative2' */
      Encoder_reading_B.AngularVelocityx4QEI = (Encoder_reading_B.angle_o -
        *lastU) / (tmp - diff);
    }

    /* Derivative: '<Root>/Derivative5' */
    if ((Encoder_reading_DW.TimeStampA_m >= tmp) &&
        (Encoder_reading_DW.TimeStampB_ne >= tmp)) {
      /* Derivative: '<Root>/Derivative5' */
      Encoder_reading_B.AngularAccerelationx4QEI = 0.0;
    } else {
      diff = Encoder_reading_DW.TimeStampA_m;
      lastU = &Encoder_reading_DW.LastUAtTimeA_g;
      if (Encoder_reading_DW.TimeStampA_m < Encoder_reading_DW.TimeStampB_ne) {
        if (Encoder_reading_DW.TimeStampB_ne < tmp) {
          diff = Encoder_reading_DW.TimeStampB_ne;
          lastU = &Encoder_reading_DW.LastUAtTimeB_b;
        }
      } else if (Encoder_reading_DW.TimeStampA_m >= tmp) {
        diff = Encoder_reading_DW.TimeStampB_ne;
        lastU = &Encoder_reading_DW.LastUAtTimeB_b;
      }

      /* Derivative: '<Root>/Derivative5' */
      Encoder_reading_B.AngularAccerelationx4QEI =
        (Encoder_reading_B.AngularVelocityx4QEI - *lastU) / (tmp - diff);
    }
  }

  {
    real_T *lastU;

    /* Update for Derivative: '<Root>/Derivative7' */
    if (Encoder_reading_DW.TimeStampA == (rtInf)) {
      Encoder_reading_DW.TimeStampA = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA;
    } else if (Encoder_reading_DW.TimeStampB == (rtInf)) {
      Encoder_reading_DW.TimeStampB = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB;
    } else if (Encoder_reading_DW.TimeStampA < Encoder_reading_DW.TimeStampB) {
      Encoder_reading_DW.TimeStampA = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA;
    } else {
      Encoder_reading_DW.TimeStampB = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB;
    }

    *lastU = Encoder_reading_B.angle_d;

    /* End of Update for Derivative: '<Root>/Derivative7' */

    /* Update for Derivative: '<Root>/Derivative10' */
    if (Encoder_reading_DW.TimeStampA_b == (rtInf)) {
      Encoder_reading_DW.TimeStampA_b = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_k;
    } else if (Encoder_reading_DW.TimeStampB_d == (rtInf)) {
      Encoder_reading_DW.TimeStampB_d = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_n;
    } else if (Encoder_reading_DW.TimeStampA_b < Encoder_reading_DW.TimeStampB_d)
    {
      Encoder_reading_DW.TimeStampA_b = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_k;
    } else {
      Encoder_reading_DW.TimeStampB_d = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_n;
    }

    *lastU = Encoder_reading_B.AngularVelocityx2Polling;

    /* End of Update for Derivative: '<Root>/Derivative10' */

    /* Update for Derivative: '<Root>/Derivative6' */
    if (Encoder_reading_DW.TimeStampA_b2 == (rtInf)) {
      Encoder_reading_DW.TimeStampA_b2 = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_c;
    } else if (Encoder_reading_DW.TimeStampB_c == (rtInf)) {
      Encoder_reading_DW.TimeStampB_c = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_a;
    } else if (Encoder_reading_DW.TimeStampA_b2 <
               Encoder_reading_DW.TimeStampB_c) {
      Encoder_reading_DW.TimeStampA_b2 = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_c;
    } else {
      Encoder_reading_DW.TimeStampB_c = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_a;
    }

    *lastU = Encoder_reading_B.angle_e;

    /* End of Update for Derivative: '<Root>/Derivative6' */

    /* Update for Derivative: '<Root>/Derivative9' */
    if (Encoder_reading_DW.TimeStampA_k == (rtInf)) {
      Encoder_reading_DW.TimeStampA_k = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_i;
    } else if (Encoder_reading_DW.TimeStampB_f == (rtInf)) {
      Encoder_reading_DW.TimeStampB_f = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_o;
    } else if (Encoder_reading_DW.TimeStampA_k < Encoder_reading_DW.TimeStampB_f)
    {
      Encoder_reading_DW.TimeStampA_k = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_i;
    } else {
      Encoder_reading_DW.TimeStampB_f = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_o;
    }

    *lastU = Encoder_reading_B.AngularVelocityx1Polling;

    /* End of Update for Derivative: '<Root>/Derivative9' */

    /* Update for Derivative: '<Root>/Derivative8' */
    if (Encoder_reading_DW.TimeStampA_g == (rtInf)) {
      Encoder_reading_DW.TimeStampA_g = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_a;
    } else if (Encoder_reading_DW.TimeStampB_n == (rtInf)) {
      Encoder_reading_DW.TimeStampB_n = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_od;
    } else if (Encoder_reading_DW.TimeStampA_g < Encoder_reading_DW.TimeStampB_n)
    {
      Encoder_reading_DW.TimeStampA_g = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_a;
    } else {
      Encoder_reading_DW.TimeStampB_n = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_od;
    }

    *lastU = Encoder_reading_B.angle;

    /* End of Update for Derivative: '<Root>/Derivative8' */

    /* Update for Derivative: '<Root>/Derivative11' */
    if (Encoder_reading_DW.TimeStampA_kt == (rtInf)) {
      Encoder_reading_DW.TimeStampA_kt = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_f;
    } else if (Encoder_reading_DW.TimeStampB_g == (rtInf)) {
      Encoder_reading_DW.TimeStampB_g = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_m;
    } else if (Encoder_reading_DW.TimeStampA_kt <
               Encoder_reading_DW.TimeStampB_g) {
      Encoder_reading_DW.TimeStampA_kt = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_f;
    } else {
      Encoder_reading_DW.TimeStampB_g = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_m;
    }

    *lastU = Encoder_reading_B.AngularVelocityx4Polling;

    /* End of Update for Derivative: '<Root>/Derivative11' */

    /* Update for Derivative: '<Root>/Derivative' */
    if (Encoder_reading_DW.TimeStampA_a == (rtInf)) {
      Encoder_reading_DW.TimeStampA_a = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_iw;
    } else if (Encoder_reading_DW.TimeStampB_dw == (rtInf)) {
      Encoder_reading_DW.TimeStampB_dw = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_g;
    } else if (Encoder_reading_DW.TimeStampA_a <
               Encoder_reading_DW.TimeStampB_dw) {
      Encoder_reading_DW.TimeStampA_a = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_iw;
    } else {
      Encoder_reading_DW.TimeStampB_dw = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_g;
    }

    *lastU = Encoder_reading_B.angle_n;

    /* End of Update for Derivative: '<Root>/Derivative' */

    /* Update for Derivative: '<Root>/Derivative3' */
    if (Encoder_reading_DW.TimeStampA_d == (rtInf)) {
      Encoder_reading_DW.TimeStampA_d = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_h;
    } else if (Encoder_reading_DW.TimeStampB_p == (rtInf)) {
      Encoder_reading_DW.TimeStampB_p = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_p;
    } else if (Encoder_reading_DW.TimeStampA_d < Encoder_reading_DW.TimeStampB_p)
    {
      Encoder_reading_DW.TimeStampA_d = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_h;
    } else {
      Encoder_reading_DW.TimeStampB_p = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_p;
    }

    *lastU = Encoder_reading_B.AngularVelocityx1QEI;

    /* End of Update for Derivative: '<Root>/Derivative3' */

    /* Update for Derivative: '<Root>/Derivative1' */
    if (Encoder_reading_DW.TimeStampA_c == (rtInf)) {
      Encoder_reading_DW.TimeStampA_c = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_h1;
    } else if (Encoder_reading_DW.TimeStampB_dn == (rtInf)) {
      Encoder_reading_DW.TimeStampB_dn = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_pq;
    } else if (Encoder_reading_DW.TimeStampA_c <
               Encoder_reading_DW.TimeStampB_dn) {
      Encoder_reading_DW.TimeStampA_c = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_h1;
    } else {
      Encoder_reading_DW.TimeStampB_dn = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_pq;
    }

    *lastU = Encoder_reading_B.angle_g;

    /* End of Update for Derivative: '<Root>/Derivative1' */

    /* Update for Derivative: '<Root>/Derivative4' */
    if (Encoder_reading_DW.TimeStampA_n == (rtInf)) {
      Encoder_reading_DW.TimeStampA_n = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_j;
    } else if (Encoder_reading_DW.TimeStampB_b == (rtInf)) {
      Encoder_reading_DW.TimeStampB_b = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_md;
    } else if (Encoder_reading_DW.TimeStampA_n < Encoder_reading_DW.TimeStampB_b)
    {
      Encoder_reading_DW.TimeStampA_n = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_j;
    } else {
      Encoder_reading_DW.TimeStampB_b = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_md;
    }

    *lastU = Encoder_reading_B.AngularVelocityx2QEI;

    /* End of Update for Derivative: '<Root>/Derivative4' */

    /* Update for Derivative: '<Root>/Derivative2' */
    if (Encoder_reading_DW.TimeStampA_ne == (rtInf)) {
      Encoder_reading_DW.TimeStampA_ne = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_c5;
    } else if (Encoder_reading_DW.TimeStampB_l == (rtInf)) {
      Encoder_reading_DW.TimeStampB_l = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_d;
    } else if (Encoder_reading_DW.TimeStampA_ne <
               Encoder_reading_DW.TimeStampB_l) {
      Encoder_reading_DW.TimeStampA_ne = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_c5;
    } else {
      Encoder_reading_DW.TimeStampB_l = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_d;
    }

    *lastU = Encoder_reading_B.angle_o;

    /* End of Update for Derivative: '<Root>/Derivative2' */

    /* Update for Derivative: '<Root>/Derivative5' */
    if (Encoder_reading_DW.TimeStampA_m == (rtInf)) {
      Encoder_reading_DW.TimeStampA_m = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_g;
    } else if (Encoder_reading_DW.TimeStampB_ne == (rtInf)) {
      Encoder_reading_DW.TimeStampB_ne = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_b;
    } else if (Encoder_reading_DW.TimeStampA_m <
               Encoder_reading_DW.TimeStampB_ne) {
      Encoder_reading_DW.TimeStampA_m = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeA_g;
    } else {
      Encoder_reading_DW.TimeStampB_ne = Encoder_reading_M->Timing.t[0];
      lastU = &Encoder_reading_DW.LastUAtTimeB_b;
    }

    *lastU = Encoder_reading_B.AngularVelocityx4QEI;

    /* End of Update for Derivative: '<Root>/Derivative5' */
  }

  {                                    /* Sample time: [0.01s, 0.0s] */
    extmodeErrorCode_T errorCode = EXTMODE_SUCCESS;
    extmodeSimulationTime_T extmodeTime = (extmodeSimulationTime_T)
      ((Encoder_reading_M->Timing.clockTick1) * 0.01);

    /* Trigger External Mode event */
    errorCode = extmodeEvent(1, extmodeTime);
    if (errorCode != EXTMODE_SUCCESS) {
      /* Code to handle External Mode event errors
         may be added here */
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  Encoder_reading_M->Timing.t[0] =
    ((time_T)(++Encoder_reading_M->Timing.clockTick0)) *
    Encoder_reading_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.01, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    Encoder_reading_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void Encoder_reading_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Encoder_reading_M->solverInfo,
                          &Encoder_reading_M->Timing.simTimeStep);
    rtsiSetTPtr(&Encoder_reading_M->solverInfo, &rtmGetTPtr(Encoder_reading_M));
    rtsiSetStepSizePtr(&Encoder_reading_M->solverInfo,
                       &Encoder_reading_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Encoder_reading_M->solverInfo, (&rtmGetErrorStatus
      (Encoder_reading_M)));
    rtsiSetRTModelPtr(&Encoder_reading_M->solverInfo, Encoder_reading_M);
  }

  rtsiSetSimTimeStep(&Encoder_reading_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&Encoder_reading_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&Encoder_reading_M->solverInfo, false);
  rtsiSetSolverName(&Encoder_reading_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(Encoder_reading_M, &Encoder_reading_M->Timing.tArray[0]);
  rtmSetTFinal(Encoder_reading_M, -1);
  Encoder_reading_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  Encoder_reading_M->Sizes.checksums[0] = (3822251199U);
  Encoder_reading_M->Sizes.checksums[1] = (1995449552U);
  Encoder_reading_M->Sizes.checksums[2] = (439792661U);
  Encoder_reading_M->Sizes.checksums[3] = (1619135310U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[19];
    Encoder_reading_M->extModeInfo = (&rt_ExtModeInfo);
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
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = &rtAlwaysEnabled;
    systemRan[16] = &rtAlwaysEnabled;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Encoder_reading_M->extModeInfo,
      &Encoder_reading_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Encoder_reading_M->extModeInfo,
                        Encoder_reading_M->Sizes.checksums);
    rteiSetTPtr(Encoder_reading_M->extModeInfo, rtmGetTPtr(Encoder_reading_M));
  }

  /* InitializeConditions for Derivative: '<Root>/Derivative7' */
  Encoder_reading_DW.TimeStampA = (rtInf);
  Encoder_reading_DW.TimeStampB = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative10' */
  Encoder_reading_DW.TimeStampA_b = (rtInf);
  Encoder_reading_DW.TimeStampB_d = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative6' */
  Encoder_reading_DW.TimeStampA_b2 = (rtInf);
  Encoder_reading_DW.TimeStampB_c = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative9' */
  Encoder_reading_DW.TimeStampA_k = (rtInf);
  Encoder_reading_DW.TimeStampB_f = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative8' */
  Encoder_reading_DW.TimeStampA_g = (rtInf);
  Encoder_reading_DW.TimeStampB_n = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative11' */
  Encoder_reading_DW.TimeStampA_kt = (rtInf);
  Encoder_reading_DW.TimeStampB_g = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative' */
  Encoder_reading_DW.TimeStampA_a = (rtInf);
  Encoder_reading_DW.TimeStampB_dw = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative3' */
  Encoder_reading_DW.TimeStampA_d = (rtInf);
  Encoder_reading_DW.TimeStampB_p = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative1' */
  Encoder_reading_DW.TimeStampA_c = (rtInf);
  Encoder_reading_DW.TimeStampB_dn = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative4' */
  Encoder_reading_DW.TimeStampA_n = (rtInf);
  Encoder_reading_DW.TimeStampB_b = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative2' */
  Encoder_reading_DW.TimeStampA_ne = (rtInf);
  Encoder_reading_DW.TimeStampB_l = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Derivative5' */
  Encoder_reading_DW.TimeStampA_m = (rtInf);
  Encoder_reading_DW.TimeStampB_ne = (rtInf);

  /* SystemInitialize for MATLAB Function: '<Root>/Angle x2 (Polling)' */
  Encoder_rea_Anglex2Polling_Init(&Encoder_reading_DW.sf_Anglex2Polling);

  /* SystemInitialize for MATLAB Function: '<Root>/Angle x1 (Polling)' */
  Encoder_rea_Anglex1Polling_Init(&Encoder_reading_DW.sf_Anglex1Polling);

  /* SystemInitialize for MATLAB Function: '<Root>/Angle x4 (Polling)' */
  Encoder_rea_Anglex2Polling_Init(&Encoder_reading_DW.sf_Anglex4Polling);

  /* SystemInitialize for MATLAB Function: '<Root>/Angle x1 (QEI)' */
  Encoder_rea_Anglex1Polling_Init(&Encoder_reading_DW.sf_Anglex1QEI);

  /* SystemInitialize for MATLAB Function: '<Root>/Angle x2 (QEI)' */
  Encoder_rea_Anglex2Polling_Init(&Encoder_reading_DW.sf_Anglex2QEI);

  /* SystemInitialize for MATLAB Function: '<Root>/Angle x3 (QEI)' */
  Encoder_rea_Anglex2Polling_Init(&Encoder_reading_DW.sf_Anglex3QEI);

  /* Start for MATLABSystem: '<Root>/Encoder x1 (QEI)' */
  Encoder_reading_DW.obj_p.isInitialized = 0;
  Encoder_reading_DW.obj_p.matlabCodegenIsDeleted = false;
  Encoder_readin_SystemCore_setup(&Encoder_reading_DW.obj_p);

  /* Start for MATLABSystem: '<Root>/Encoder x2 (QEI)' */
  Encoder_reading_DW.obj_h.isInitialized = 0;
  Encoder_reading_DW.obj_h.matlabCodegenIsDeleted = false;
  Encoder_read_SystemCore_setup_c(&Encoder_reading_DW.obj_h);

  /* Start for MATLABSystem: '<Root>/Encoder x4 (QEI)' */
  Encoder_reading_DW.obj.isInitialized = 0;
  Encoder_reading_DW.obj.matlabCodegenIsDeleted = false;
  Encoder_rea_SystemCore_setup_c3(&Encoder_reading_DW.obj);
}

/* Model terminate function */
void Encoder_reading_terminate(void)
{
  uint8_T ChannelInfo;

  /* Terminate for MATLABSystem: '<Root>/Encoder x1 (QEI)' */
  if (!Encoder_reading_DW.obj_p.matlabCodegenIsDeleted) {
    Encoder_reading_DW.obj_p.matlabCodegenIsDeleted = true;
    if ((Encoder_reading_DW.obj_p.isInitialized == 1) &&
        Encoder_reading_DW.obj_p.isSetupComplete) {
      disableCounter(Encoder_reading_DW.obj_p.TimerHandle);
      disableTimerInterrupts(Encoder_reading_DW.obj_p.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(Encoder_reading_DW.obj_p.TimerHandle, ChannelInfo);
      disableTimerChannel2(Encoder_reading_DW.obj_p.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder x1 (QEI)' */
  /* Terminate for MATLABSystem: '<Root>/Encoder x2 (QEI)' */
  if (!Encoder_reading_DW.obj_h.matlabCodegenIsDeleted) {
    Encoder_reading_DW.obj_h.matlabCodegenIsDeleted = true;
    if ((Encoder_reading_DW.obj_h.isInitialized == 1) &&
        Encoder_reading_DW.obj_h.isSetupComplete) {
      disableCounter(Encoder_reading_DW.obj_h.TimerHandle);
      disableTimerInterrupts(Encoder_reading_DW.obj_h.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(Encoder_reading_DW.obj_h.TimerHandle, ChannelInfo);
      disableTimerChannel2(Encoder_reading_DW.obj_h.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder x2 (QEI)' */
  /* Terminate for MATLABSystem: '<Root>/Encoder x4 (QEI)' */
  if (!Encoder_reading_DW.obj.matlabCodegenIsDeleted) {
    Encoder_reading_DW.obj.matlabCodegenIsDeleted = true;
    if ((Encoder_reading_DW.obj.isInitialized == 1) &&
        Encoder_reading_DW.obj.isSetupComplete) {
      disableCounter(Encoder_reading_DW.obj.TimerHandle);
      disableTimerInterrupts(Encoder_reading_DW.obj.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(Encoder_reading_DW.obj.TimerHandle, ChannelInfo);
      disableTimerChannel2(Encoder_reading_DW.obj.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder x4 (QEI)' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
