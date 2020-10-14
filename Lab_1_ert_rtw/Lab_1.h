/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lab_1.h
 *
 * Code generated for Simulink model 'Lab_1'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Mon Oct  5 17:33:06 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Lab_1_h_
#define RTW_HEADER_Lab_1_h_
#include <stddef.h>
#ifndef Lab_1_COMMON_INCLUDES_
# define Lab_1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_digitalIO.h"
#endif                                 /* Lab_1_COMMON_INCLUDES_ */

#include "Lab_1_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  freedomk64f_DigitalWrite_Lab__T obj; /* '<Root>/Digital Write' */
  uint16_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint8_T is_active_c3_Lab_1;          /* '<Root>/Chart' */
  uint8_T is_c3_Lab_1;                 /* '<Root>/Chart' */
} DW_Lab_1_T;

/* Parameters (default storage) */
struct P_Lab_1_T_ {
  int16_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
  int16_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<Root>/Constant1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Lab_1_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Lab_1_T Lab_1_P;

/* Block states (default storage) */
extern DW_Lab_1_T Lab_1_DW;

/* Model entry point functions */
extern void Lab_1_initialize(void);
extern void Lab_1_step(void);
extern void Lab_1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Lab_1_T *const Lab_1_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<Root>' : 'Lab_1'
 * '<S1>'   : 'Lab_1/Chart'
 */
#endif                                 /* RTW_HEADER_Lab_1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
