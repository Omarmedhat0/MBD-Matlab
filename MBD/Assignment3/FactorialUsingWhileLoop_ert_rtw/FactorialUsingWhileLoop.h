/*
 * File: FactorialUsingWhileLoop.h
 *
 * Code generated for Simulink model 'FactorialUsingWhileLoop'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Jan 25 21:09:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FactorialUsingWhileLoop_h_
#define RTW_HEADER_FactorialUsingWhileLoop_h_
#ifndef FactorialUsingWhileLoop_COMMON_INCLUDES_
#define FactorialUsingWhileLoop_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                            /* FactorialUsingWhileLoop_COMMON_INCLUDES_ */

#include "FactorialUsingWhileLoop_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T Delay1_DSTATE;               /* '<S1>/Delay1' */
  int32_T Delay_DSTATE;                /* '<S1>/Delay' */
} DW_FactorialUsingWhileLoop_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T In1;                         /* '<Root>/In1' */
  boolean_T IC;                        /* '<Root>/IC' */
} ExtU_FactorialUsingWhileLoop_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int32_T Out1;                        /* '<Root>/Out1' */
} ExtY_FactorialUsingWhileLoop_T;

/* Real-time Model Data Structure */
struct tag_RTM_FactorialUsingWhileLo_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_FactorialUsingWhileLoop_T FactorialUsingWhileLoop_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_FactorialUsingWhileLoop_T FactorialUsingWhileLoop_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FactorialUsingWhileLoop_T FactorialUsingWhileLoop_Y;

/* Model entry point functions */
extern void FactorialUsingWhileLoop_initialize(void);
extern void FactorialUsingWhileLoop_step(void);
extern void FactorialUsingWhileLoop_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FactorialUsingWhileL_T *const FactorialUsingWhileLoop_M;

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
 * '<Root>' : 'FactorialUsingWhileLoop'
 * '<S1>'   : 'FactorialUsingWhileLoop/While Iterator Subsystem1'
 */
#endif                               /* RTW_HEADER_FactorialUsingWhileLoop_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
