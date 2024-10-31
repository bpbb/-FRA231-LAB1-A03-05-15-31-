/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Encoder_reading_private.h
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

#ifndef Encoder_reading_private_h_
#define Encoder_reading_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "Encoder_reading.h"
#include "Encoder_reading_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern void Encoder_rea_Anglex1Polling_Init(DW_Anglex1Polling_Encoder_rea_T
  *localDW);
extern void Encoder_reading_Anglex1Polling(real_T rtu_count, real_T
  rtu_countsPerRevolution, real_T *rty_angle, DW_Anglex1Polling_Encoder_rea_T
  *localDW);
extern void Encoder_rea_Anglex2Polling_Init(DW_Anglex2Polling_Encoder_rea_T
  *localDW);
extern void Encoder_reading_Anglex2Polling(real_T rtu_count, real_T
  rtu_countsPerRevolution, real_T *rty_angle, DW_Anglex2Polling_Encoder_rea_T
  *localDW);

#endif                                 /* Encoder_reading_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
