/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lab_1.c
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

#include "Lab_1.h"
#include "Lab_1_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Lab_1_IN_LED_OFF               ((uint8_T)1U)
#define Lab_1_IN_LED_ON                ((uint8_T)2U)

/* Block states (default storage) */
DW_Lab_1_T Lab_1_DW;

/* Real-time model */
RT_MODEL_Lab_1_T Lab_1_M_;
RT_MODEL_Lab_1_T *const Lab_1_M = &Lab_1_M_;

/* Forward declaration for local functions */
static void Lab_1_SystemCore_release(const freedomk64f_DigitalWrite_Lab__T *obj);
static void Lab_1_SystemCore_delete(const freedomk64f_DigitalWrite_Lab__T *obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_DigitalWrite_Lab__T *obj);
static void Lab_1_SystemCore_release(const freedomk64f_DigitalWrite_Lab__T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void Lab_1_SystemCore_delete(const freedomk64f_DigitalWrite_Lab__T *obj)
{
  Lab_1_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_DigitalWrite_Lab__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Lab_1_SystemCore_delete(obj);
  }
}

/* Model step function */
void Lab_1_step(void)
{
  boolean_T rtb_LED_STATE;

  /* Chart: '<Root>/Chart' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   */
  if (Lab_1_DW.temporalCounter_i1 < 32767U) {
    Lab_1_DW.temporalCounter_i1++;
  }

  if (Lab_1_DW.is_active_c3_Lab_1 == 0U) {
    Lab_1_DW.is_active_c3_Lab_1 = 1U;
    Lab_1_DW.is_c3_Lab_1 = Lab_1_IN_LED_ON;
    Lab_1_DW.temporalCounter_i1 = 0U;
    rtb_LED_STATE = true;
  } else if (Lab_1_DW.is_c3_Lab_1 == Lab_1_IN_LED_OFF) {
    rtb_LED_STATE = false;
    if (Lab_1_DW.temporalCounter_i1 >= Lab_1_P.Constant1_Value) {
      Lab_1_DW.is_c3_Lab_1 = Lab_1_IN_LED_ON;
      Lab_1_DW.temporalCounter_i1 = 0U;
      rtb_LED_STATE = true;
    }
  } else {
    /* case IN_LED_ON: */
    rtb_LED_STATE = true;
    if (Lab_1_DW.temporalCounter_i1 >= Lab_1_P.Constant_Value) {
      Lab_1_DW.is_c3_Lab_1 = Lab_1_IN_LED_OFF;
      Lab_1_DW.temporalCounter_i1 = 0U;
      rtb_LED_STATE = false;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* MATLABSystem: '<Root>/Digital Write' */
  MW_digitalIO_write(Lab_1_DW.obj.MW_DIGITALIO_HANDLE, rtb_LED_STATE);
}

/* Model initialize function */
void Lab_1_initialize(void)
{
  {
    freedomk64f_DigitalWrite_Lab__T *obj;

    /* Start for MATLABSystem: '<Root>/Digital Write' */
    Lab_1_DW.obj.matlabCodegenIsDeleted = true;
    Lab_1_DW.obj.isInitialized = 0;
    Lab_1_DW.obj.matlabCodegenIsDeleted = false;
    obj = &Lab_1_DW.obj;
    Lab_1_DW.obj.isSetupComplete = false;
    Lab_1_DW.obj.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(42U, 1);
    Lab_1_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void Lab_1_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Write' */
  matlabCodegenHandle_matlabCodeg(&Lab_1_DW.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
