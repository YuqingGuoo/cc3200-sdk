/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A75
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/lm4/Timer.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/family/arm/m3/Timer.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Mailbox.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_lm4_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Object__ {
    const ti_sysbios_family_arm_lm4_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_lm4_Timer_RunMode runMode;
    ti_sysbios_family_arm_lm4_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_lm4_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt rollovers;
    xdc_UInt savedCurrCount;
    xdc_Bool altclk;
} ti_sysbios_family_arm_lm4_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_lm4_Timer_Object__ obj;
} ti_sysbios_family_arm_lm4_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_lm4_Timer___VERS
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Timer_Module__ ti_sysbios_family_arm_m3_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Timer_Object__ {
    const ti_sysbios_family_arm_m3_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_m3_Timer_RunMode runMode;
    ti_sysbios_family_arm_m3_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_m3_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
} ti_sysbios_family_arm_m3_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Timer_Object__ obj;
} ti_sysbios_family_arm_m3_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Timer___VERS
    #define ti_sysbios_family_arm_m3_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__ *__fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock_TimerProxy___VERS
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Mailbox_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Mailbox_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Mailbox_Module__ ti_sysbios_knl_Mailbox_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* <-- ti_sysbios_knl_Semaphore_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Mailbox_Object__ {
    xdc_runtime_IHeap_Handle heap;
    xdc_SizeT msgSize;
    xdc_UInt numMsgs;
    xdc_Ptr buf;
    xdc_UInt numFreeMsgs;
    __TA_ti_sysbios_knl_Mailbox_Instance_State__allocBuf allocBuf;
    ti_sysbios_knl_Queue_Object__ Object_field_dataQue;
    ti_sysbios_knl_Queue_Object__ Object_field_freeQue;
    ti_sysbios_knl_Semaphore_Object__ Object_field_dataSem;
    ti_sysbios_knl_Semaphore_Object__ Object_field_freeSem;
} ti_sysbios_knl_Mailbox_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Mailbox_Object__ obj;
} ti_sysbios_knl_Mailbox_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Mailbox___VERS
    #define ti_sysbios_knl_Mailbox___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Mailbox___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8020, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x802b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x802c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8024, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_lm4_Timer_Module_State__;

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[4];

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[4];

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V;

/* --> ti_sysbios_family_arm_lm4_Timer_enableCC3200 */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_enableCC3200(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_disableCC3200 */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_disableCC3200(xdc_Int);


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_SizeT isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Timer_Object__ ti_sysbios_family_arm_m3_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Timer_Module_State__ {
    volatile xdc_UInt tickCount;
    xdc_UInt availMask;
    ti_sysbios_family_arm_m3_Timer_Handle handle;
} ti_sysbios_family_arm_m3_Timer_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V;


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[32768];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[32768] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> tirtos_idle_hook */
extern xdc_Void tirtos_idle_hook(xdc_Void);

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[4];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Mailbox_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Mailbox_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6255];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[45];


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_dataQue__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_dataQue__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataQue__O = offsetof(ti_sysbios_knl_Mailbox_Object__, Object_field_dataQue);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_freeQue__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_freeQue__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeQue__O = offsetof(ti_sysbios_knl_Mailbox_Object__, Object_field_freeQue);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_dataSem__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_dataSem__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataSem__O = offsetof(ti_sysbios_knl_Mailbox_Object__, Object_field_dataSem);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_freeSem__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_freeSem__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeSem__O = offsetof(ti_sysbios_knl_Mailbox_Object__, Object_field_freeSem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = D:/ti/CC3200SDK_1.1.0/cc3200-sdk/ti_rtos/ti_rtos_config/ccs/Default/configPkg/package/cfg/app_pem4");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.simplelink");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== ti.platforms.simplelink.Platform TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_knl_Mailbox_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}


/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[11];
    xdc_runtime_Startup_startModsFxn__C(state, 11);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt, 
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_CString fmt = *pfmt;
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                                       (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (xdc_Int) va_arg(va, xdc_IArg) : 
                                       (xdc_Int) va_arg(va, xdc_Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[6];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_family_arm_m3_Timer_startup__E();
extern Void ti_sysbios_family_arm_lm4_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_m3_Timer_startup__E();
    ti_sysbios_family_arm_lm4_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */



/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
    (UInt32)(ti_sysbios_family_arm_m3_Hwi_dispatch__I),  /* intNum = 15 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 16 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 17 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 18 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 19 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 20 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 21 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 22 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 23 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 24 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 25 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 26 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 27 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 28 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 29 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 30 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 31 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 32 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 33 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 34 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 35 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 36 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 37 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 38 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 39 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 40 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 41 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 42 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 43 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 44 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 45 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 46 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 47 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 48 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 49 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 50 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 51 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 52 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 53 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 54 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 55 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 56 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 57 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 58 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 59 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 60 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 61 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 62 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 63 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 64 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 65 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 66 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 67 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 68 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 69 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 70 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 71 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 72 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 73 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 74 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 75 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 76 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 77 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 78 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 79 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 80 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 81 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 82 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 83 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 84 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 85 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 86 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 87 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 88 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 89 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 90 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 91 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 92 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 93 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 94 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 95 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 96 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 97 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 98 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 99 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 100 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 101 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 102 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 103 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 104 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 105 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 106 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 107 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 108 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 109 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 110 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 111 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 112 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 113 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 114 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 115 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 116 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 117 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 118 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 119 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 120 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 121 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 122 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 123 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 124 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 125 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 126 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 127 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 128 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 129 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 130 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 131 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 132 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 133 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 134 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 135 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 136 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 137 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 138 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 139 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 140 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 141 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 142 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 143 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 144 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 145 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 146 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 147 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 148 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 149 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 150 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 151 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 152 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 153 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 154 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 155 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 156 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 157 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 158 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 159 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 160 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 161 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 162 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 163 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 164 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 165 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 166 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 167 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 168 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 169 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 170 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 171 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 172 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 173 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 174 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 175 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 176 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 177 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 178 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 179 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 180 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 181 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 182 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 183 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 184 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 185 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 186 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 187 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 188 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 189 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 190 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 191 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 192 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 193 */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),  /* intNum = 194 */
};


UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[195];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
        ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (SizeT)__section_size("CSTACK");
}
#endif

/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x4c4b400,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x4c4b400,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x8000;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_lm4_Timer_Params ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_lm4_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    (xdc_UInt)0xffffffff,  /* prevThreshold */
    0,  /* altclk */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link},  /* link.prev */
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[4] = {
    {
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_Ptr)(0x40030000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_Ptr)(0x40031000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x27,  /* intNum */
        ((xdc_Ptr)(0x40032000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x33,  /* intNum */
        ((xdc_Ptr)(0x40033000)),  /* baseAddr */
    },  /* [3] */
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[4] = {
    0,  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V = {
    (xdc_UInt)0xf,  /* availMask */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__id__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__id ti_sysbios_family_arm_lm4_Timer_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__count__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__count ti_sysbios_family_arm_lm4_Timer_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__heap ti_sysbios_family_arm_lm4_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__sizeof ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_lm4_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__table__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__table ti_sysbios_family_arm_lm4_Timer_Object__table__C = 0;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_invalidTimer ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4384) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_notAvailable ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4420) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_cannotSupport ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4459) << 16 | 0);

/* E_noaltclk__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_noaltclk ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C = (((xdc_runtime_Error_Id)4638) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_anyMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_anyMask ti_sysbios_family_arm_lm4_Timer_anyMask__C = (xdc_UInt)0xf;

/* supportsAltclk__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C, ".const:ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_supportsAltclk ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C = 1;

/* enableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_enableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_enableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc ti_sysbios_family_arm_lm4_Timer_enableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_enableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableCC3200));

/* disableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_disableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_disableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc ti_sysbios_family_arm_lm4_Timer_disableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_disableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_disableCC3200));

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_lm4_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_startupNeeded ti_sysbios_family_arm_lm4_Timer_startupNeeded__C = (xdc_UInt)0x0;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_numTimerDevices ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C = (xdc_Int)0x4;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_m3_Timer_Handle)&ti_sysbios_family_arm_m3_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_m3_Timer_periodicStub__I)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0xf,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    (xdc_SizeT)0x2000,  /* isrStackSize */
    ((xdc_Ptr)(0x20004000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xc3;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)5843) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)5913) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)1867) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3898) << 16 | 0);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)3946) << 16 | 0);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)3994) << 16 | 0);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4199) << 16 | 0);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4227) << 16 | 0);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4237) << 16 | 0);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4253) << 16 | 0);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4283) << 16 | 0);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4313) << 16 | 0);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4330) << 16 | 0);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4351) << 16 | 0);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4366) << 16 | 0);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x4;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x202;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.arm.m3.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Timer_Params ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Timer_Module__ ti_sysbios_family_arm_m3_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Timer_Object__ ti_sysbios_family_arm_m3_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x13880,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0xf,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V = {
    (xdc_UInt)0x0,  /* tickCount */
    (xdc_UInt)0x0,  /* availMask */
    (ti_sysbios_family_arm_m3_Timer_Handle)&ti_sysbios_family_arm_m3_Timer_Object__table__V[0],  /* handle */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsMask ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__gateObj ti_sysbios_family_arm_m3_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__gatePrms ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__id__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__id ti_sysbios_family_arm_m3_Timer_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerDefined ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerObj ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__count__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__count ti_sysbios_family_arm_m3_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__heap ti_sysbios_family_arm_m3_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__sizeof ti_sysbios_family_arm_m3_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__table__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__table ti_sysbios_family_arm_m3_Timer_Object__table__C = ti_sysbios_family_arm_m3_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_m3_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_E_invalidTimer ti_sysbios_family_arm_m3_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4384) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_m3_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_E_notAvailable ti_sysbios_family_arm_m3_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4420) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_m3_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_E_cannotSupport ti_sysbios_family_arm_m3_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4459) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_anyMask__C, ".const:ti_sysbios_family_arm_m3_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_anyMask ti_sysbios_family_arm_m3_Timer_anyMask__C = (xdc_UInt)0x1;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_m3_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_startupNeeded ti_sysbios_family_arm_m3_Timer_startupNeeded__C = (xdc_UInt)0x1;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)3334) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4601) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = 0;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[32768];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x8000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2372) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2408) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2453) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4565) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2344) << 16 | 16);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_m3_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)4898) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)4920) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)4938) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)487) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)568) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)4970) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5024) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)638) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)685) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)724) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)767) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)830) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)tirtos_idle_hook)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Mailbox_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__PARAMS__C, ".const:ti_sysbios_knl_Mailbox_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Mailbox_Params ti_sysbios_knl_Mailbox_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Mailbox_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Mailbox_Object__PARAMS__C.__iprms, /* instance */
    0,  /* heap */
    0,  /* readerEvent */
    (xdc_UInt)0x1,  /* readerEventId */
    0,  /* writerEvent */
    (xdc_UInt)0x1,  /* writerEventId */
    ((xdc_Ptr)0),  /* buf */
    (xdc_UInt)0x0,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Mailbox_Module__ ti_sysbios_knl_Mailbox_Module__root__V = {
    {&ti_sysbios_knl_Mailbox_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Mailbox_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsEnabled ti_sysbios_knl_Mailbox_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsIncluded ti_sysbios_knl_Mailbox_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsMask__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsMask ti_sysbios_knl_Mailbox_Module__diagsMask__C = ((CT__ti_sysbios_knl_Mailbox_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__gateObj__C, ".const:ti_sysbios_knl_Mailbox_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__gateObj ti_sysbios_knl_Mailbox_Module__gateObj__C = ((CT__ti_sysbios_knl_Mailbox_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__gatePrms__C, ".const:ti_sysbios_knl_Mailbox_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__gatePrms ti_sysbios_knl_Mailbox_Module__gatePrms__C = ((CT__ti_sysbios_knl_Mailbox_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__id__C, ".const:ti_sysbios_knl_Mailbox_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__id ti_sysbios_knl_Mailbox_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerDefined__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerDefined ti_sysbios_knl_Mailbox_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerObj__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerObj ti_sysbios_knl_Mailbox_Module__loggerObj__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0 ti_sysbios_knl_Mailbox_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1 ti_sysbios_knl_Mailbox_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2 ti_sysbios_knl_Mailbox_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4 ti_sysbios_knl_Mailbox_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8 ti_sysbios_knl_Mailbox_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Mailbox_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__startupDoneFxn ti_sysbios_knl_Mailbox_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Mailbox_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__count__C, ".const:ti_sysbios_knl_Mailbox_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__count ti_sysbios_knl_Mailbox_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__heap__C, ".const:ti_sysbios_knl_Mailbox_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__heap ti_sysbios_knl_Mailbox_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__sizeof__C, ".const:ti_sysbios_knl_Mailbox_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__sizeof ti_sysbios_knl_Mailbox_Object__sizeof__C = sizeof(ti_sysbios_knl_Mailbox_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__table__C, ".const:ti_sysbios_knl_Mailbox_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__table ti_sysbios_knl_Mailbox_Object__table__C = 0;

/* A_invalidBufSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_A_invalidBufSize__C, ".const:ti_sysbios_knl_Mailbox_A_invalidBufSize__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_A_invalidBufSize ti_sysbios_knl_Mailbox_A_invalidBufSize__C = (((xdc_runtime_Assert_Id)920) << 16 | 16);

/* maxTypeAlign__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_maxTypeAlign__C, ".const:ti_sysbios_knl_Mailbox_maxTypeAlign__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_maxTypeAlign ti_sysbios_knl_Mailbox_maxTypeAlign__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5105) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5135) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)978) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1033) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)767) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1098) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1152) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5178) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5225) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5243) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1246) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1303) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5283) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5351) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5396) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5437) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5469) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5517) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5573) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5604) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5687) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)5773) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3773) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3816) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)3867) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1352) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1421) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1475) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1529) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1592) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1642) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1677) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1710) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1794) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3533) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3555) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3559) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3593) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4722) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4746) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4767) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4786) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4803) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4817) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4833) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4840) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4851) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4861) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4880) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x4090;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x4090;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[4] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTimers__I)),  /* [3] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Mailbox_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Module_startup__E)),  /* [10] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {4, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_SysMin_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x400;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6255] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6e,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x6c,  /* [404] */
    (xdc_Char)0x6c,  /* [405] */
    (xdc_Char)0x50,  /* [406] */
    (xdc_Char)0x6f,  /* [407] */
    (xdc_Char)0x69,  /* [408] */
    (xdc_Char)0x6e,  /* [409] */
    (xdc_Char)0x74,  /* [410] */
    (xdc_Char)0x65,  /* [411] */
    (xdc_Char)0x72,  /* [412] */
    (xdc_Char)0x3a,  /* [413] */
    (xdc_Char)0x20,  /* [414] */
    (xdc_Char)0x50,  /* [415] */
    (xdc_Char)0x6f,  /* [416] */
    (xdc_Char)0x69,  /* [417] */
    (xdc_Char)0x6e,  /* [418] */
    (xdc_Char)0x74,  /* [419] */
    (xdc_Char)0x65,  /* [420] */
    (xdc_Char)0x72,  /* [421] */
    (xdc_Char)0x20,  /* [422] */
    (xdc_Char)0x69,  /* [423] */
    (xdc_Char)0x73,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x6e,  /* [426] */
    (xdc_Char)0x75,  /* [427] */
    (xdc_Char)0x6c,  /* [428] */
    (xdc_Char)0x6c,  /* [429] */
    (xdc_Char)0x0,  /* [430] */
    (xdc_Char)0x41,  /* [431] */
    (xdc_Char)0x5f,  /* [432] */
    (xdc_Char)0x69,  /* [433] */
    (xdc_Char)0x6e,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x61,  /* [436] */
    (xdc_Char)0x6c,  /* [437] */
    (xdc_Char)0x69,  /* [438] */
    (xdc_Char)0x64,  /* [439] */
    (xdc_Char)0x52,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x67,  /* [442] */
    (xdc_Char)0x69,  /* [443] */
    (xdc_Char)0x6f,  /* [444] */
    (xdc_Char)0x6e,  /* [445] */
    (xdc_Char)0x49,  /* [446] */
    (xdc_Char)0x64,  /* [447] */
    (xdc_Char)0x3a,  /* [448] */
    (xdc_Char)0x20,  /* [449] */
    (xdc_Char)0x4d,  /* [450] */
    (xdc_Char)0x50,  /* [451] */
    (xdc_Char)0x55,  /* [452] */
    (xdc_Char)0x20,  /* [453] */
    (xdc_Char)0x52,  /* [454] */
    (xdc_Char)0x65,  /* [455] */
    (xdc_Char)0x67,  /* [456] */
    (xdc_Char)0x69,  /* [457] */
    (xdc_Char)0x6f,  /* [458] */
    (xdc_Char)0x6e,  /* [459] */
    (xdc_Char)0x20,  /* [460] */
    (xdc_Char)0x6e,  /* [461] */
    (xdc_Char)0x75,  /* [462] */
    (xdc_Char)0x6d,  /* [463] */
    (xdc_Char)0x62,  /* [464] */
    (xdc_Char)0x65,  /* [465] */
    (xdc_Char)0x72,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x70,  /* [468] */
    (xdc_Char)0x61,  /* [469] */
    (xdc_Char)0x73,  /* [470] */
    (xdc_Char)0x73,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x64,  /* [473] */
    (xdc_Char)0x20,  /* [474] */
    (xdc_Char)0x69,  /* [475] */
    (xdc_Char)0x73,  /* [476] */
    (xdc_Char)0x20,  /* [477] */
    (xdc_Char)0x69,  /* [478] */
    (xdc_Char)0x6e,  /* [479] */
    (xdc_Char)0x76,  /* [480] */
    (xdc_Char)0x61,  /* [481] */
    (xdc_Char)0x6c,  /* [482] */
    (xdc_Char)0x69,  /* [483] */
    (xdc_Char)0x64,  /* [484] */
    (xdc_Char)0x2e,  /* [485] */
    (xdc_Char)0x0,  /* [486] */
    (xdc_Char)0x41,  /* [487] */
    (xdc_Char)0x5f,  /* [488] */
    (xdc_Char)0x63,  /* [489] */
    (xdc_Char)0x6c,  /* [490] */
    (xdc_Char)0x6f,  /* [491] */
    (xdc_Char)0x63,  /* [492] */
    (xdc_Char)0x6b,  /* [493] */
    (xdc_Char)0x44,  /* [494] */
    (xdc_Char)0x69,  /* [495] */
    (xdc_Char)0x73,  /* [496] */
    (xdc_Char)0x61,  /* [497] */
    (xdc_Char)0x62,  /* [498] */
    (xdc_Char)0x6c,  /* [499] */
    (xdc_Char)0x65,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x3a,  /* [502] */
    (xdc_Char)0x20,  /* [503] */
    (xdc_Char)0x43,  /* [504] */
    (xdc_Char)0x61,  /* [505] */
    (xdc_Char)0x6e,  /* [506] */
    (xdc_Char)0x6e,  /* [507] */
    (xdc_Char)0x6f,  /* [508] */
    (xdc_Char)0x74,  /* [509] */
    (xdc_Char)0x20,  /* [510] */
    (xdc_Char)0x63,  /* [511] */
    (xdc_Char)0x72,  /* [512] */
    (xdc_Char)0x65,  /* [513] */
    (xdc_Char)0x61,  /* [514] */
    (xdc_Char)0x74,  /* [515] */
    (xdc_Char)0x65,  /* [516] */
    (xdc_Char)0x20,  /* [517] */
    (xdc_Char)0x61,  /* [518] */
    (xdc_Char)0x20,  /* [519] */
    (xdc_Char)0x63,  /* [520] */
    (xdc_Char)0x6c,  /* [521] */
    (xdc_Char)0x6f,  /* [522] */
    (xdc_Char)0x63,  /* [523] */
    (xdc_Char)0x6b,  /* [524] */
    (xdc_Char)0x20,  /* [525] */
    (xdc_Char)0x69,  /* [526] */
    (xdc_Char)0x6e,  /* [527] */
    (xdc_Char)0x73,  /* [528] */
    (xdc_Char)0x74,  /* [529] */
    (xdc_Char)0x61,  /* [530] */
    (xdc_Char)0x6e,  /* [531] */
    (xdc_Char)0x63,  /* [532] */
    (xdc_Char)0x65,  /* [533] */
    (xdc_Char)0x20,  /* [534] */
    (xdc_Char)0x77,  /* [535] */
    (xdc_Char)0x68,  /* [536] */
    (xdc_Char)0x65,  /* [537] */
    (xdc_Char)0x6e,  /* [538] */
    (xdc_Char)0x20,  /* [539] */
    (xdc_Char)0x42,  /* [540] */
    (xdc_Char)0x49,  /* [541] */
    (xdc_Char)0x4f,  /* [542] */
    (xdc_Char)0x53,  /* [543] */
    (xdc_Char)0x2e,  /* [544] */
    (xdc_Char)0x63,  /* [545] */
    (xdc_Char)0x6c,  /* [546] */
    (xdc_Char)0x6f,  /* [547] */
    (xdc_Char)0x63,  /* [548] */
    (xdc_Char)0x6b,  /* [549] */
    (xdc_Char)0x45,  /* [550] */
    (xdc_Char)0x6e,  /* [551] */
    (xdc_Char)0x61,  /* [552] */
    (xdc_Char)0x62,  /* [553] */
    (xdc_Char)0x6c,  /* [554] */
    (xdc_Char)0x65,  /* [555] */
    (xdc_Char)0x64,  /* [556] */
    (xdc_Char)0x20,  /* [557] */
    (xdc_Char)0x69,  /* [558] */
    (xdc_Char)0x73,  /* [559] */
    (xdc_Char)0x20,  /* [560] */
    (xdc_Char)0x66,  /* [561] */
    (xdc_Char)0x61,  /* [562] */
    (xdc_Char)0x6c,  /* [563] */
    (xdc_Char)0x73,  /* [564] */
    (xdc_Char)0x65,  /* [565] */
    (xdc_Char)0x2e,  /* [566] */
    (xdc_Char)0x0,  /* [567] */
    (xdc_Char)0x41,  /* [568] */
    (xdc_Char)0x5f,  /* [569] */
    (xdc_Char)0x62,  /* [570] */
    (xdc_Char)0x61,  /* [571] */
    (xdc_Char)0x64,  /* [572] */
    (xdc_Char)0x54,  /* [573] */
    (xdc_Char)0x68,  /* [574] */
    (xdc_Char)0x72,  /* [575] */
    (xdc_Char)0x65,  /* [576] */
    (xdc_Char)0x61,  /* [577] */
    (xdc_Char)0x64,  /* [578] */
    (xdc_Char)0x54,  /* [579] */
    (xdc_Char)0x79,  /* [580] */
    (xdc_Char)0x70,  /* [581] */
    (xdc_Char)0x65,  /* [582] */
    (xdc_Char)0x3a,  /* [583] */
    (xdc_Char)0x20,  /* [584] */
    (xdc_Char)0x43,  /* [585] */
    (xdc_Char)0x61,  /* [586] */
    (xdc_Char)0x6e,  /* [587] */
    (xdc_Char)0x6e,  /* [588] */
    (xdc_Char)0x6f,  /* [589] */
    (xdc_Char)0x74,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x63,  /* [592] */
    (xdc_Char)0x72,  /* [593] */
    (xdc_Char)0x65,  /* [594] */
    (xdc_Char)0x61,  /* [595] */
    (xdc_Char)0x74,  /* [596] */
    (xdc_Char)0x65,  /* [597] */
    (xdc_Char)0x2f,  /* [598] */
    (xdc_Char)0x64,  /* [599] */
    (xdc_Char)0x65,  /* [600] */
    (xdc_Char)0x6c,  /* [601] */
    (xdc_Char)0x65,  /* [602] */
    (xdc_Char)0x74,  /* [603] */
    (xdc_Char)0x65,  /* [604] */
    (xdc_Char)0x20,  /* [605] */
    (xdc_Char)0x61,  /* [606] */
    (xdc_Char)0x20,  /* [607] */
    (xdc_Char)0x43,  /* [608] */
    (xdc_Char)0x6c,  /* [609] */
    (xdc_Char)0x6f,  /* [610] */
    (xdc_Char)0x63,  /* [611] */
    (xdc_Char)0x6b,  /* [612] */
    (xdc_Char)0x20,  /* [613] */
    (xdc_Char)0x66,  /* [614] */
    (xdc_Char)0x72,  /* [615] */
    (xdc_Char)0x6f,  /* [616] */
    (xdc_Char)0x6d,  /* [617] */
    (xdc_Char)0x20,  /* [618] */
    (xdc_Char)0x48,  /* [619] */
    (xdc_Char)0x77,  /* [620] */
    (xdc_Char)0x69,  /* [621] */
    (xdc_Char)0x20,  /* [622] */
    (xdc_Char)0x6f,  /* [623] */
    (xdc_Char)0x72,  /* [624] */
    (xdc_Char)0x20,  /* [625] */
    (xdc_Char)0x53,  /* [626] */
    (xdc_Char)0x77,  /* [627] */
    (xdc_Char)0x69,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x74,  /* [630] */
    (xdc_Char)0x68,  /* [631] */
    (xdc_Char)0x72,  /* [632] */
    (xdc_Char)0x65,  /* [633] */
    (xdc_Char)0x61,  /* [634] */
    (xdc_Char)0x64,  /* [635] */
    (xdc_Char)0x2e,  /* [636] */
    (xdc_Char)0x0,  /* [637] */
    (xdc_Char)0x41,  /* [638] */
    (xdc_Char)0x5f,  /* [639] */
    (xdc_Char)0x6e,  /* [640] */
    (xdc_Char)0x75,  /* [641] */
    (xdc_Char)0x6c,  /* [642] */
    (xdc_Char)0x6c,  /* [643] */
    (xdc_Char)0x45,  /* [644] */
    (xdc_Char)0x76,  /* [645] */
    (xdc_Char)0x65,  /* [646] */
    (xdc_Char)0x6e,  /* [647] */
    (xdc_Char)0x74,  /* [648] */
    (xdc_Char)0x4d,  /* [649] */
    (xdc_Char)0x61,  /* [650] */
    (xdc_Char)0x73,  /* [651] */
    (xdc_Char)0x6b,  /* [652] */
    (xdc_Char)0x73,  /* [653] */
    (xdc_Char)0x3a,  /* [654] */
    (xdc_Char)0x20,  /* [655] */
    (xdc_Char)0x6f,  /* [656] */
    (xdc_Char)0x72,  /* [657] */
    (xdc_Char)0x4d,  /* [658] */
    (xdc_Char)0x61,  /* [659] */
    (xdc_Char)0x73,  /* [660] */
    (xdc_Char)0x6b,  /* [661] */
    (xdc_Char)0x20,  /* [662] */
    (xdc_Char)0x61,  /* [663] */
    (xdc_Char)0x6e,  /* [664] */
    (xdc_Char)0x64,  /* [665] */
    (xdc_Char)0x20,  /* [666] */
    (xdc_Char)0x61,  /* [667] */
    (xdc_Char)0x6e,  /* [668] */
    (xdc_Char)0x64,  /* [669] */
    (xdc_Char)0x4d,  /* [670] */
    (xdc_Char)0x61,  /* [671] */
    (xdc_Char)0x73,  /* [672] */
    (xdc_Char)0x6b,  /* [673] */
    (xdc_Char)0x20,  /* [674] */
    (xdc_Char)0x61,  /* [675] */
    (xdc_Char)0x72,  /* [676] */
    (xdc_Char)0x65,  /* [677] */
    (xdc_Char)0x20,  /* [678] */
    (xdc_Char)0x6e,  /* [679] */
    (xdc_Char)0x75,  /* [680] */
    (xdc_Char)0x6c,  /* [681] */
    (xdc_Char)0x6c,  /* [682] */
    (xdc_Char)0x2e,  /* [683] */
    (xdc_Char)0x0,  /* [684] */
    (xdc_Char)0x41,  /* [685] */
    (xdc_Char)0x5f,  /* [686] */
    (xdc_Char)0x6e,  /* [687] */
    (xdc_Char)0x75,  /* [688] */
    (xdc_Char)0x6c,  /* [689] */
    (xdc_Char)0x6c,  /* [690] */
    (xdc_Char)0x45,  /* [691] */
    (xdc_Char)0x76,  /* [692] */
    (xdc_Char)0x65,  /* [693] */
    (xdc_Char)0x6e,  /* [694] */
    (xdc_Char)0x74,  /* [695] */
    (xdc_Char)0x49,  /* [696] */
    (xdc_Char)0x64,  /* [697] */
    (xdc_Char)0x3a,  /* [698] */
    (xdc_Char)0x20,  /* [699] */
    (xdc_Char)0x70,  /* [700] */
    (xdc_Char)0x6f,  /* [701] */
    (xdc_Char)0x73,  /* [702] */
    (xdc_Char)0x74,  /* [703] */
    (xdc_Char)0x65,  /* [704] */
    (xdc_Char)0x64,  /* [705] */
    (xdc_Char)0x20,  /* [706] */
    (xdc_Char)0x65,  /* [707] */
    (xdc_Char)0x76,  /* [708] */
    (xdc_Char)0x65,  /* [709] */
    (xdc_Char)0x6e,  /* [710] */
    (xdc_Char)0x74,  /* [711] */
    (xdc_Char)0x49,  /* [712] */
    (xdc_Char)0x64,  /* [713] */
    (xdc_Char)0x20,  /* [714] */
    (xdc_Char)0x69,  /* [715] */
    (xdc_Char)0x73,  /* [716] */
    (xdc_Char)0x20,  /* [717] */
    (xdc_Char)0x6e,  /* [718] */
    (xdc_Char)0x75,  /* [719] */
    (xdc_Char)0x6c,  /* [720] */
    (xdc_Char)0x6c,  /* [721] */
    (xdc_Char)0x2e,  /* [722] */
    (xdc_Char)0x0,  /* [723] */
    (xdc_Char)0x41,  /* [724] */
    (xdc_Char)0x5f,  /* [725] */
    (xdc_Char)0x65,  /* [726] */
    (xdc_Char)0x76,  /* [727] */
    (xdc_Char)0x65,  /* [728] */
    (xdc_Char)0x6e,  /* [729] */
    (xdc_Char)0x74,  /* [730] */
    (xdc_Char)0x49,  /* [731] */
    (xdc_Char)0x6e,  /* [732] */
    (xdc_Char)0x55,  /* [733] */
    (xdc_Char)0x73,  /* [734] */
    (xdc_Char)0x65,  /* [735] */
    (xdc_Char)0x3a,  /* [736] */
    (xdc_Char)0x20,  /* [737] */
    (xdc_Char)0x45,  /* [738] */
    (xdc_Char)0x76,  /* [739] */
    (xdc_Char)0x65,  /* [740] */
    (xdc_Char)0x6e,  /* [741] */
    (xdc_Char)0x74,  /* [742] */
    (xdc_Char)0x20,  /* [743] */
    (xdc_Char)0x6f,  /* [744] */
    (xdc_Char)0x62,  /* [745] */
    (xdc_Char)0x6a,  /* [746] */
    (xdc_Char)0x65,  /* [747] */
    (xdc_Char)0x63,  /* [748] */
    (xdc_Char)0x74,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x61,  /* [751] */
    (xdc_Char)0x6c,  /* [752] */
    (xdc_Char)0x72,  /* [753] */
    (xdc_Char)0x65,  /* [754] */
    (xdc_Char)0x61,  /* [755] */
    (xdc_Char)0x64,  /* [756] */
    (xdc_Char)0x79,  /* [757] */
    (xdc_Char)0x20,  /* [758] */
    (xdc_Char)0x69,  /* [759] */
    (xdc_Char)0x6e,  /* [760] */
    (xdc_Char)0x20,  /* [761] */
    (xdc_Char)0x75,  /* [762] */
    (xdc_Char)0x73,  /* [763] */
    (xdc_Char)0x65,  /* [764] */
    (xdc_Char)0x2e,  /* [765] */
    (xdc_Char)0x0,  /* [766] */
    (xdc_Char)0x41,  /* [767] */
    (xdc_Char)0x5f,  /* [768] */
    (xdc_Char)0x62,  /* [769] */
    (xdc_Char)0x61,  /* [770] */
    (xdc_Char)0x64,  /* [771] */
    (xdc_Char)0x43,  /* [772] */
    (xdc_Char)0x6f,  /* [773] */
    (xdc_Char)0x6e,  /* [774] */
    (xdc_Char)0x74,  /* [775] */
    (xdc_Char)0x65,  /* [776] */
    (xdc_Char)0x78,  /* [777] */
    (xdc_Char)0x74,  /* [778] */
    (xdc_Char)0x3a,  /* [779] */
    (xdc_Char)0x20,  /* [780] */
    (xdc_Char)0x62,  /* [781] */
    (xdc_Char)0x61,  /* [782] */
    (xdc_Char)0x64,  /* [783] */
    (xdc_Char)0x20,  /* [784] */
    (xdc_Char)0x63,  /* [785] */
    (xdc_Char)0x61,  /* [786] */
    (xdc_Char)0x6c,  /* [787] */
    (xdc_Char)0x6c,  /* [788] */
    (xdc_Char)0x69,  /* [789] */
    (xdc_Char)0x6e,  /* [790] */
    (xdc_Char)0x67,  /* [791] */
    (xdc_Char)0x20,  /* [792] */
    (xdc_Char)0x63,  /* [793] */
    (xdc_Char)0x6f,  /* [794] */
    (xdc_Char)0x6e,  /* [795] */
    (xdc_Char)0x74,  /* [796] */
    (xdc_Char)0x65,  /* [797] */
    (xdc_Char)0x78,  /* [798] */
    (xdc_Char)0x74,  /* [799] */
    (xdc_Char)0x2e,  /* [800] */
    (xdc_Char)0x20,  /* [801] */
    (xdc_Char)0x4d,  /* [802] */
    (xdc_Char)0x75,  /* [803] */
    (xdc_Char)0x73,  /* [804] */
    (xdc_Char)0x74,  /* [805] */
    (xdc_Char)0x20,  /* [806] */
    (xdc_Char)0x62,  /* [807] */
    (xdc_Char)0x65,  /* [808] */
    (xdc_Char)0x20,  /* [809] */
    (xdc_Char)0x63,  /* [810] */
    (xdc_Char)0x61,  /* [811] */
    (xdc_Char)0x6c,  /* [812] */
    (xdc_Char)0x6c,  /* [813] */
    (xdc_Char)0x65,  /* [814] */
    (xdc_Char)0x64,  /* [815] */
    (xdc_Char)0x20,  /* [816] */
    (xdc_Char)0x66,  /* [817] */
    (xdc_Char)0x72,  /* [818] */
    (xdc_Char)0x6f,  /* [819] */
    (xdc_Char)0x6d,  /* [820] */
    (xdc_Char)0x20,  /* [821] */
    (xdc_Char)0x61,  /* [822] */
    (xdc_Char)0x20,  /* [823] */
    (xdc_Char)0x54,  /* [824] */
    (xdc_Char)0x61,  /* [825] */
    (xdc_Char)0x73,  /* [826] */
    (xdc_Char)0x6b,  /* [827] */
    (xdc_Char)0x2e,  /* [828] */
    (xdc_Char)0x0,  /* [829] */
    (xdc_Char)0x41,  /* [830] */
    (xdc_Char)0x5f,  /* [831] */
    (xdc_Char)0x70,  /* [832] */
    (xdc_Char)0x65,  /* [833] */
    (xdc_Char)0x6e,  /* [834] */
    (xdc_Char)0x64,  /* [835] */
    (xdc_Char)0x54,  /* [836] */
    (xdc_Char)0x61,  /* [837] */
    (xdc_Char)0x73,  /* [838] */
    (xdc_Char)0x6b,  /* [839] */
    (xdc_Char)0x44,  /* [840] */
    (xdc_Char)0x69,  /* [841] */
    (xdc_Char)0x73,  /* [842] */
    (xdc_Char)0x61,  /* [843] */
    (xdc_Char)0x62,  /* [844] */
    (xdc_Char)0x6c,  /* [845] */
    (xdc_Char)0x65,  /* [846] */
    (xdc_Char)0x64,  /* [847] */
    (xdc_Char)0x3a,  /* [848] */
    (xdc_Char)0x20,  /* [849] */
    (xdc_Char)0x43,  /* [850] */
    (xdc_Char)0x61,  /* [851] */
    (xdc_Char)0x6e,  /* [852] */
    (xdc_Char)0x6e,  /* [853] */
    (xdc_Char)0x6f,  /* [854] */
    (xdc_Char)0x74,  /* [855] */
    (xdc_Char)0x20,  /* [856] */
    (xdc_Char)0x63,  /* [857] */
    (xdc_Char)0x61,  /* [858] */
    (xdc_Char)0x6c,  /* [859] */
    (xdc_Char)0x6c,  /* [860] */
    (xdc_Char)0x20,  /* [861] */
    (xdc_Char)0x45,  /* [862] */
    (xdc_Char)0x76,  /* [863] */
    (xdc_Char)0x65,  /* [864] */
    (xdc_Char)0x6e,  /* [865] */
    (xdc_Char)0x74,  /* [866] */
    (xdc_Char)0x5f,  /* [867] */
    (xdc_Char)0x70,  /* [868] */
    (xdc_Char)0x65,  /* [869] */
    (xdc_Char)0x6e,  /* [870] */
    (xdc_Char)0x64,  /* [871] */
    (xdc_Char)0x28,  /* [872] */
    (xdc_Char)0x29,  /* [873] */
    (xdc_Char)0x20,  /* [874] */
    (xdc_Char)0x77,  /* [875] */
    (xdc_Char)0x68,  /* [876] */
    (xdc_Char)0x69,  /* [877] */
    (xdc_Char)0x6c,  /* [878] */
    (xdc_Char)0x65,  /* [879] */
    (xdc_Char)0x20,  /* [880] */
    (xdc_Char)0x74,  /* [881] */
    (xdc_Char)0x68,  /* [882] */
    (xdc_Char)0x65,  /* [883] */
    (xdc_Char)0x20,  /* [884] */
    (xdc_Char)0x54,  /* [885] */
    (xdc_Char)0x61,  /* [886] */
    (xdc_Char)0x73,  /* [887] */
    (xdc_Char)0x6b,  /* [888] */
    (xdc_Char)0x20,  /* [889] */
    (xdc_Char)0x6f,  /* [890] */
    (xdc_Char)0x72,  /* [891] */
    (xdc_Char)0x20,  /* [892] */
    (xdc_Char)0x53,  /* [893] */
    (xdc_Char)0x77,  /* [894] */
    (xdc_Char)0x69,  /* [895] */
    (xdc_Char)0x20,  /* [896] */
    (xdc_Char)0x73,  /* [897] */
    (xdc_Char)0x63,  /* [898] */
    (xdc_Char)0x68,  /* [899] */
    (xdc_Char)0x65,  /* [900] */
    (xdc_Char)0x64,  /* [901] */
    (xdc_Char)0x75,  /* [902] */
    (xdc_Char)0x6c,  /* [903] */
    (xdc_Char)0x65,  /* [904] */
    (xdc_Char)0x72,  /* [905] */
    (xdc_Char)0x20,  /* [906] */
    (xdc_Char)0x69,  /* [907] */
    (xdc_Char)0x73,  /* [908] */
    (xdc_Char)0x20,  /* [909] */
    (xdc_Char)0x64,  /* [910] */
    (xdc_Char)0x69,  /* [911] */
    (xdc_Char)0x73,  /* [912] */
    (xdc_Char)0x61,  /* [913] */
    (xdc_Char)0x62,  /* [914] */
    (xdc_Char)0x6c,  /* [915] */
    (xdc_Char)0x65,  /* [916] */
    (xdc_Char)0x64,  /* [917] */
    (xdc_Char)0x2e,  /* [918] */
    (xdc_Char)0x0,  /* [919] */
    (xdc_Char)0x4d,  /* [920] */
    (xdc_Char)0x61,  /* [921] */
    (xdc_Char)0x69,  /* [922] */
    (xdc_Char)0x6c,  /* [923] */
    (xdc_Char)0x62,  /* [924] */
    (xdc_Char)0x6f,  /* [925] */
    (xdc_Char)0x78,  /* [926] */
    (xdc_Char)0x5f,  /* [927] */
    (xdc_Char)0x63,  /* [928] */
    (xdc_Char)0x72,  /* [929] */
    (xdc_Char)0x65,  /* [930] */
    (xdc_Char)0x61,  /* [931] */
    (xdc_Char)0x74,  /* [932] */
    (xdc_Char)0x65,  /* [933] */
    (xdc_Char)0x27,  /* [934] */
    (xdc_Char)0x73,  /* [935] */
    (xdc_Char)0x20,  /* [936] */
    (xdc_Char)0x62,  /* [937] */
    (xdc_Char)0x75,  /* [938] */
    (xdc_Char)0x66,  /* [939] */
    (xdc_Char)0x53,  /* [940] */
    (xdc_Char)0x69,  /* [941] */
    (xdc_Char)0x7a,  /* [942] */
    (xdc_Char)0x65,  /* [943] */
    (xdc_Char)0x20,  /* [944] */
    (xdc_Char)0x70,  /* [945] */
    (xdc_Char)0x61,  /* [946] */
    (xdc_Char)0x72,  /* [947] */
    (xdc_Char)0x61,  /* [948] */
    (xdc_Char)0x6d,  /* [949] */
    (xdc_Char)0x65,  /* [950] */
    (xdc_Char)0x74,  /* [951] */
    (xdc_Char)0x65,  /* [952] */
    (xdc_Char)0x72,  /* [953] */
    (xdc_Char)0x20,  /* [954] */
    (xdc_Char)0x69,  /* [955] */
    (xdc_Char)0x73,  /* [956] */
    (xdc_Char)0x20,  /* [957] */
    (xdc_Char)0x69,  /* [958] */
    (xdc_Char)0x6e,  /* [959] */
    (xdc_Char)0x76,  /* [960] */
    (xdc_Char)0x61,  /* [961] */
    (xdc_Char)0x6c,  /* [962] */
    (xdc_Char)0x69,  /* [963] */
    (xdc_Char)0x64,  /* [964] */
    (xdc_Char)0x20,  /* [965] */
    (xdc_Char)0x28,  /* [966] */
    (xdc_Char)0x74,  /* [967] */
    (xdc_Char)0x6f,  /* [968] */
    (xdc_Char)0x6f,  /* [969] */
    (xdc_Char)0x20,  /* [970] */
    (xdc_Char)0x73,  /* [971] */
    (xdc_Char)0x6d,  /* [972] */
    (xdc_Char)0x61,  /* [973] */
    (xdc_Char)0x6c,  /* [974] */
    (xdc_Char)0x6c,  /* [975] */
    (xdc_Char)0x29,  /* [976] */
    (xdc_Char)0x0,  /* [977] */
    (xdc_Char)0x41,  /* [978] */
    (xdc_Char)0x5f,  /* [979] */
    (xdc_Char)0x6e,  /* [980] */
    (xdc_Char)0x6f,  /* [981] */
    (xdc_Char)0x45,  /* [982] */
    (xdc_Char)0x76,  /* [983] */
    (xdc_Char)0x65,  /* [984] */
    (xdc_Char)0x6e,  /* [985] */
    (xdc_Char)0x74,  /* [986] */
    (xdc_Char)0x73,  /* [987] */
    (xdc_Char)0x3a,  /* [988] */
    (xdc_Char)0x20,  /* [989] */
    (xdc_Char)0x54,  /* [990] */
    (xdc_Char)0x68,  /* [991] */
    (xdc_Char)0x65,  /* [992] */
    (xdc_Char)0x20,  /* [993] */
    (xdc_Char)0x45,  /* [994] */
    (xdc_Char)0x76,  /* [995] */
    (xdc_Char)0x65,  /* [996] */
    (xdc_Char)0x6e,  /* [997] */
    (xdc_Char)0x74,  /* [998] */
    (xdc_Char)0x2e,  /* [999] */
    (xdc_Char)0x73,  /* [1000] */
    (xdc_Char)0x75,  /* [1001] */
    (xdc_Char)0x70,  /* [1002] */
    (xdc_Char)0x70,  /* [1003] */
    (xdc_Char)0x6f,  /* [1004] */
    (xdc_Char)0x72,  /* [1005] */
    (xdc_Char)0x74,  /* [1006] */
    (xdc_Char)0x73,  /* [1007] */
    (xdc_Char)0x45,  /* [1008] */
    (xdc_Char)0x76,  /* [1009] */
    (xdc_Char)0x65,  /* [1010] */
    (xdc_Char)0x6e,  /* [1011] */
    (xdc_Char)0x74,  /* [1012] */
    (xdc_Char)0x73,  /* [1013] */
    (xdc_Char)0x20,  /* [1014] */
    (xdc_Char)0x66,  /* [1015] */
    (xdc_Char)0x6c,  /* [1016] */
    (xdc_Char)0x61,  /* [1017] */
    (xdc_Char)0x67,  /* [1018] */
    (xdc_Char)0x20,  /* [1019] */
    (xdc_Char)0x69,  /* [1020] */
    (xdc_Char)0x73,  /* [1021] */
    (xdc_Char)0x20,  /* [1022] */
    (xdc_Char)0x64,  /* [1023] */
    (xdc_Char)0x69,  /* [1024] */
    (xdc_Char)0x73,  /* [1025] */
    (xdc_Char)0x61,  /* [1026] */
    (xdc_Char)0x62,  /* [1027] */
    (xdc_Char)0x6c,  /* [1028] */
    (xdc_Char)0x65,  /* [1029] */
    (xdc_Char)0x64,  /* [1030] */
    (xdc_Char)0x2e,  /* [1031] */
    (xdc_Char)0x0,  /* [1032] */
    (xdc_Char)0x41,  /* [1033] */
    (xdc_Char)0x5f,  /* [1034] */
    (xdc_Char)0x69,  /* [1035] */
    (xdc_Char)0x6e,  /* [1036] */
    (xdc_Char)0x76,  /* [1037] */
    (xdc_Char)0x54,  /* [1038] */
    (xdc_Char)0x69,  /* [1039] */
    (xdc_Char)0x6d,  /* [1040] */
    (xdc_Char)0x65,  /* [1041] */
    (xdc_Char)0x6f,  /* [1042] */
    (xdc_Char)0x75,  /* [1043] */
    (xdc_Char)0x74,  /* [1044] */
    (xdc_Char)0x3a,  /* [1045] */
    (xdc_Char)0x20,  /* [1046] */
    (xdc_Char)0x43,  /* [1047] */
    (xdc_Char)0x61,  /* [1048] */
    (xdc_Char)0x6e,  /* [1049] */
    (xdc_Char)0x27,  /* [1050] */
    (xdc_Char)0x74,  /* [1051] */
    (xdc_Char)0x20,  /* [1052] */
    (xdc_Char)0x75,  /* [1053] */
    (xdc_Char)0x73,  /* [1054] */
    (xdc_Char)0x65,  /* [1055] */
    (xdc_Char)0x20,  /* [1056] */
    (xdc_Char)0x42,  /* [1057] */
    (xdc_Char)0x49,  /* [1058] */
    (xdc_Char)0x4f,  /* [1059] */
    (xdc_Char)0x53,  /* [1060] */
    (xdc_Char)0x5f,  /* [1061] */
    (xdc_Char)0x45,  /* [1062] */
    (xdc_Char)0x56,  /* [1063] */
    (xdc_Char)0x45,  /* [1064] */
    (xdc_Char)0x4e,  /* [1065] */
    (xdc_Char)0x54,  /* [1066] */
    (xdc_Char)0x5f,  /* [1067] */
    (xdc_Char)0x41,  /* [1068] */
    (xdc_Char)0x43,  /* [1069] */
    (xdc_Char)0x51,  /* [1070] */
    (xdc_Char)0x55,  /* [1071] */
    (xdc_Char)0x49,  /* [1072] */
    (xdc_Char)0x52,  /* [1073] */
    (xdc_Char)0x45,  /* [1074] */
    (xdc_Char)0x44,  /* [1075] */
    (xdc_Char)0x20,  /* [1076] */
    (xdc_Char)0x77,  /* [1077] */
    (xdc_Char)0x69,  /* [1078] */
    (xdc_Char)0x74,  /* [1079] */
    (xdc_Char)0x68,  /* [1080] */
    (xdc_Char)0x20,  /* [1081] */
    (xdc_Char)0x74,  /* [1082] */
    (xdc_Char)0x68,  /* [1083] */
    (xdc_Char)0x69,  /* [1084] */
    (xdc_Char)0x73,  /* [1085] */
    (xdc_Char)0x20,  /* [1086] */
    (xdc_Char)0x53,  /* [1087] */
    (xdc_Char)0x65,  /* [1088] */
    (xdc_Char)0x6d,  /* [1089] */
    (xdc_Char)0x61,  /* [1090] */
    (xdc_Char)0x70,  /* [1091] */
    (xdc_Char)0x68,  /* [1092] */
    (xdc_Char)0x6f,  /* [1093] */
    (xdc_Char)0x72,  /* [1094] */
    (xdc_Char)0x65,  /* [1095] */
    (xdc_Char)0x2e,  /* [1096] */
    (xdc_Char)0x0,  /* [1097] */
    (xdc_Char)0x41,  /* [1098] */
    (xdc_Char)0x5f,  /* [1099] */
    (xdc_Char)0x6f,  /* [1100] */
    (xdc_Char)0x76,  /* [1101] */
    (xdc_Char)0x65,  /* [1102] */
    (xdc_Char)0x72,  /* [1103] */
    (xdc_Char)0x66,  /* [1104] */
    (xdc_Char)0x6c,  /* [1105] */
    (xdc_Char)0x6f,  /* [1106] */
    (xdc_Char)0x77,  /* [1107] */
    (xdc_Char)0x3a,  /* [1108] */
    (xdc_Char)0x20,  /* [1109] */
    (xdc_Char)0x43,  /* [1110] */
    (xdc_Char)0x6f,  /* [1111] */
    (xdc_Char)0x75,  /* [1112] */
    (xdc_Char)0x6e,  /* [1113] */
    (xdc_Char)0x74,  /* [1114] */
    (xdc_Char)0x20,  /* [1115] */
    (xdc_Char)0x68,  /* [1116] */
    (xdc_Char)0x61,  /* [1117] */
    (xdc_Char)0x73,  /* [1118] */
    (xdc_Char)0x20,  /* [1119] */
    (xdc_Char)0x65,  /* [1120] */
    (xdc_Char)0x78,  /* [1121] */
    (xdc_Char)0x63,  /* [1122] */
    (xdc_Char)0x65,  /* [1123] */
    (xdc_Char)0x65,  /* [1124] */
    (xdc_Char)0x64,  /* [1125] */
    (xdc_Char)0x65,  /* [1126] */
    (xdc_Char)0x64,  /* [1127] */
    (xdc_Char)0x20,  /* [1128] */
    (xdc_Char)0x36,  /* [1129] */
    (xdc_Char)0x35,  /* [1130] */
    (xdc_Char)0x35,  /* [1131] */
    (xdc_Char)0x33,  /* [1132] */
    (xdc_Char)0x35,  /* [1133] */
    (xdc_Char)0x20,  /* [1134] */
    (xdc_Char)0x61,  /* [1135] */
    (xdc_Char)0x6e,  /* [1136] */
    (xdc_Char)0x64,  /* [1137] */
    (xdc_Char)0x20,  /* [1138] */
    (xdc_Char)0x72,  /* [1139] */
    (xdc_Char)0x6f,  /* [1140] */
    (xdc_Char)0x6c,  /* [1141] */
    (xdc_Char)0x6c,  /* [1142] */
    (xdc_Char)0x65,  /* [1143] */
    (xdc_Char)0x64,  /* [1144] */
    (xdc_Char)0x20,  /* [1145] */
    (xdc_Char)0x6f,  /* [1146] */
    (xdc_Char)0x76,  /* [1147] */
    (xdc_Char)0x65,  /* [1148] */
    (xdc_Char)0x72,  /* [1149] */
    (xdc_Char)0x2e,  /* [1150] */
    (xdc_Char)0x0,  /* [1151] */
    (xdc_Char)0x41,  /* [1152] */
    (xdc_Char)0x5f,  /* [1153] */
    (xdc_Char)0x70,  /* [1154] */
    (xdc_Char)0x65,  /* [1155] */
    (xdc_Char)0x6e,  /* [1156] */
    (xdc_Char)0x64,  /* [1157] */
    (xdc_Char)0x54,  /* [1158] */
    (xdc_Char)0x61,  /* [1159] */
    (xdc_Char)0x73,  /* [1160] */
    (xdc_Char)0x6b,  /* [1161] */
    (xdc_Char)0x44,  /* [1162] */
    (xdc_Char)0x69,  /* [1163] */
    (xdc_Char)0x73,  /* [1164] */
    (xdc_Char)0x61,  /* [1165] */
    (xdc_Char)0x62,  /* [1166] */
    (xdc_Char)0x6c,  /* [1167] */
    (xdc_Char)0x65,  /* [1168] */
    (xdc_Char)0x64,  /* [1169] */
    (xdc_Char)0x3a,  /* [1170] */
    (xdc_Char)0x20,  /* [1171] */
    (xdc_Char)0x43,  /* [1172] */
    (xdc_Char)0x61,  /* [1173] */
    (xdc_Char)0x6e,  /* [1174] */
    (xdc_Char)0x6e,  /* [1175] */
    (xdc_Char)0x6f,  /* [1176] */
    (xdc_Char)0x74,  /* [1177] */
    (xdc_Char)0x20,  /* [1178] */
    (xdc_Char)0x63,  /* [1179] */
    (xdc_Char)0x61,  /* [1180] */
    (xdc_Char)0x6c,  /* [1181] */
    (xdc_Char)0x6c,  /* [1182] */
    (xdc_Char)0x20,  /* [1183] */
    (xdc_Char)0x53,  /* [1184] */
    (xdc_Char)0x65,  /* [1185] */
    (xdc_Char)0x6d,  /* [1186] */
    (xdc_Char)0x61,  /* [1187] */
    (xdc_Char)0x70,  /* [1188] */
    (xdc_Char)0x68,  /* [1189] */
    (xdc_Char)0x6f,  /* [1190] */
    (xdc_Char)0x72,  /* [1191] */
    (xdc_Char)0x65,  /* [1192] */
    (xdc_Char)0x5f,  /* [1193] */
    (xdc_Char)0x70,  /* [1194] */
    (xdc_Char)0x65,  /* [1195] */
    (xdc_Char)0x6e,  /* [1196] */
    (xdc_Char)0x64,  /* [1197] */
    (xdc_Char)0x28,  /* [1198] */
    (xdc_Char)0x29,  /* [1199] */
    (xdc_Char)0x20,  /* [1200] */
    (xdc_Char)0x77,  /* [1201] */
    (xdc_Char)0x68,  /* [1202] */
    (xdc_Char)0x69,  /* [1203] */
    (xdc_Char)0x6c,  /* [1204] */
    (xdc_Char)0x65,  /* [1205] */
    (xdc_Char)0x20,  /* [1206] */
    (xdc_Char)0x74,  /* [1207] */
    (xdc_Char)0x68,  /* [1208] */
    (xdc_Char)0x65,  /* [1209] */
    (xdc_Char)0x20,  /* [1210] */
    (xdc_Char)0x54,  /* [1211] */
    (xdc_Char)0x61,  /* [1212] */
    (xdc_Char)0x73,  /* [1213] */
    (xdc_Char)0x6b,  /* [1214] */
    (xdc_Char)0x20,  /* [1215] */
    (xdc_Char)0x6f,  /* [1216] */
    (xdc_Char)0x72,  /* [1217] */
    (xdc_Char)0x20,  /* [1218] */
    (xdc_Char)0x53,  /* [1219] */
    (xdc_Char)0x77,  /* [1220] */
    (xdc_Char)0x69,  /* [1221] */
    (xdc_Char)0x20,  /* [1222] */
    (xdc_Char)0x73,  /* [1223] */
    (xdc_Char)0x63,  /* [1224] */
    (xdc_Char)0x68,  /* [1225] */
    (xdc_Char)0x65,  /* [1226] */
    (xdc_Char)0x64,  /* [1227] */
    (xdc_Char)0x75,  /* [1228] */
    (xdc_Char)0x6c,  /* [1229] */
    (xdc_Char)0x65,  /* [1230] */
    (xdc_Char)0x72,  /* [1231] */
    (xdc_Char)0x20,  /* [1232] */
    (xdc_Char)0x69,  /* [1233] */
    (xdc_Char)0x73,  /* [1234] */
    (xdc_Char)0x20,  /* [1235] */
    (xdc_Char)0x64,  /* [1236] */
    (xdc_Char)0x69,  /* [1237] */
    (xdc_Char)0x73,  /* [1238] */
    (xdc_Char)0x61,  /* [1239] */
    (xdc_Char)0x62,  /* [1240] */
    (xdc_Char)0x6c,  /* [1241] */
    (xdc_Char)0x65,  /* [1242] */
    (xdc_Char)0x64,  /* [1243] */
    (xdc_Char)0x2e,  /* [1244] */
    (xdc_Char)0x0,  /* [1245] */
    (xdc_Char)0x41,  /* [1246] */
    (xdc_Char)0x5f,  /* [1247] */
    (xdc_Char)0x73,  /* [1248] */
    (xdc_Char)0x77,  /* [1249] */
    (xdc_Char)0x69,  /* [1250] */
    (xdc_Char)0x44,  /* [1251] */
    (xdc_Char)0x69,  /* [1252] */
    (xdc_Char)0x73,  /* [1253] */
    (xdc_Char)0x61,  /* [1254] */
    (xdc_Char)0x62,  /* [1255] */
    (xdc_Char)0x6c,  /* [1256] */
    (xdc_Char)0x65,  /* [1257] */
    (xdc_Char)0x64,  /* [1258] */
    (xdc_Char)0x3a,  /* [1259] */
    (xdc_Char)0x20,  /* [1260] */
    (xdc_Char)0x43,  /* [1261] */
    (xdc_Char)0x61,  /* [1262] */
    (xdc_Char)0x6e,  /* [1263] */
    (xdc_Char)0x6e,  /* [1264] */
    (xdc_Char)0x6f,  /* [1265] */
    (xdc_Char)0x74,  /* [1266] */
    (xdc_Char)0x20,  /* [1267] */
    (xdc_Char)0x63,  /* [1268] */
    (xdc_Char)0x72,  /* [1269] */
    (xdc_Char)0x65,  /* [1270] */
    (xdc_Char)0x61,  /* [1271] */
    (xdc_Char)0x74,  /* [1272] */
    (xdc_Char)0x65,  /* [1273] */
    (xdc_Char)0x20,  /* [1274] */
    (xdc_Char)0x61,  /* [1275] */
    (xdc_Char)0x20,  /* [1276] */
    (xdc_Char)0x53,  /* [1277] */
    (xdc_Char)0x77,  /* [1278] */
    (xdc_Char)0x69,  /* [1279] */
    (xdc_Char)0x20,  /* [1280] */
    (xdc_Char)0x77,  /* [1281] */
    (xdc_Char)0x68,  /* [1282] */
    (xdc_Char)0x65,  /* [1283] */
    (xdc_Char)0x6e,  /* [1284] */
    (xdc_Char)0x20,  /* [1285] */
    (xdc_Char)0x53,  /* [1286] */
    (xdc_Char)0x77,  /* [1287] */
    (xdc_Char)0x69,  /* [1288] */
    (xdc_Char)0x20,  /* [1289] */
    (xdc_Char)0x69,  /* [1290] */
    (xdc_Char)0x73,  /* [1291] */
    (xdc_Char)0x20,  /* [1292] */
    (xdc_Char)0x64,  /* [1293] */
    (xdc_Char)0x69,  /* [1294] */
    (xdc_Char)0x73,  /* [1295] */
    (xdc_Char)0x61,  /* [1296] */
    (xdc_Char)0x62,  /* [1297] */
    (xdc_Char)0x6c,  /* [1298] */
    (xdc_Char)0x65,  /* [1299] */
    (xdc_Char)0x64,  /* [1300] */
    (xdc_Char)0x2e,  /* [1301] */
    (xdc_Char)0x0,  /* [1302] */
    (xdc_Char)0x41,  /* [1303] */
    (xdc_Char)0x5f,  /* [1304] */
    (xdc_Char)0x62,  /* [1305] */
    (xdc_Char)0x61,  /* [1306] */
    (xdc_Char)0x64,  /* [1307] */
    (xdc_Char)0x50,  /* [1308] */
    (xdc_Char)0x72,  /* [1309] */
    (xdc_Char)0x69,  /* [1310] */
    (xdc_Char)0x6f,  /* [1311] */
    (xdc_Char)0x72,  /* [1312] */
    (xdc_Char)0x69,  /* [1313] */
    (xdc_Char)0x74,  /* [1314] */
    (xdc_Char)0x79,  /* [1315] */
    (xdc_Char)0x3a,  /* [1316] */
    (xdc_Char)0x20,  /* [1317] */
    (xdc_Char)0x41,  /* [1318] */
    (xdc_Char)0x6e,  /* [1319] */
    (xdc_Char)0x20,  /* [1320] */
    (xdc_Char)0x69,  /* [1321] */
    (xdc_Char)0x6e,  /* [1322] */
    (xdc_Char)0x76,  /* [1323] */
    (xdc_Char)0x61,  /* [1324] */
    (xdc_Char)0x6c,  /* [1325] */
    (xdc_Char)0x69,  /* [1326] */
    (xdc_Char)0x64,  /* [1327] */
    (xdc_Char)0x20,  /* [1328] */
    (xdc_Char)0x53,  /* [1329] */
    (xdc_Char)0x77,  /* [1330] */
    (xdc_Char)0x69,  /* [1331] */
    (xdc_Char)0x20,  /* [1332] */
    (xdc_Char)0x70,  /* [1333] */
    (xdc_Char)0x72,  /* [1334] */
    (xdc_Char)0x69,  /* [1335] */
    (xdc_Char)0x6f,  /* [1336] */
    (xdc_Char)0x72,  /* [1337] */
    (xdc_Char)0x69,  /* [1338] */
    (xdc_Char)0x74,  /* [1339] */
    (xdc_Char)0x79,  /* [1340] */
    (xdc_Char)0x20,  /* [1341] */
    (xdc_Char)0x77,  /* [1342] */
    (xdc_Char)0x61,  /* [1343] */
    (xdc_Char)0x73,  /* [1344] */
    (xdc_Char)0x20,  /* [1345] */
    (xdc_Char)0x75,  /* [1346] */
    (xdc_Char)0x73,  /* [1347] */
    (xdc_Char)0x65,  /* [1348] */
    (xdc_Char)0x64,  /* [1349] */
    (xdc_Char)0x2e,  /* [1350] */
    (xdc_Char)0x0,  /* [1351] */
    (xdc_Char)0x41,  /* [1352] */
    (xdc_Char)0x5f,  /* [1353] */
    (xdc_Char)0x62,  /* [1354] */
    (xdc_Char)0x61,  /* [1355] */
    (xdc_Char)0x64,  /* [1356] */
    (xdc_Char)0x54,  /* [1357] */
    (xdc_Char)0x68,  /* [1358] */
    (xdc_Char)0x72,  /* [1359] */
    (xdc_Char)0x65,  /* [1360] */
    (xdc_Char)0x61,  /* [1361] */
    (xdc_Char)0x64,  /* [1362] */
    (xdc_Char)0x54,  /* [1363] */
    (xdc_Char)0x79,  /* [1364] */
    (xdc_Char)0x70,  /* [1365] */
    (xdc_Char)0x65,  /* [1366] */
    (xdc_Char)0x3a,  /* [1367] */
    (xdc_Char)0x20,  /* [1368] */
    (xdc_Char)0x43,  /* [1369] */
    (xdc_Char)0x61,  /* [1370] */
    (xdc_Char)0x6e,  /* [1371] */
    (xdc_Char)0x6e,  /* [1372] */
    (xdc_Char)0x6f,  /* [1373] */
    (xdc_Char)0x74,  /* [1374] */
    (xdc_Char)0x20,  /* [1375] */
    (xdc_Char)0x63,  /* [1376] */
    (xdc_Char)0x72,  /* [1377] */
    (xdc_Char)0x65,  /* [1378] */
    (xdc_Char)0x61,  /* [1379] */
    (xdc_Char)0x74,  /* [1380] */
    (xdc_Char)0x65,  /* [1381] */
    (xdc_Char)0x2f,  /* [1382] */
    (xdc_Char)0x64,  /* [1383] */
    (xdc_Char)0x65,  /* [1384] */
    (xdc_Char)0x6c,  /* [1385] */
    (xdc_Char)0x65,  /* [1386] */
    (xdc_Char)0x74,  /* [1387] */
    (xdc_Char)0x65,  /* [1388] */
    (xdc_Char)0x20,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x20,  /* [1391] */
    (xdc_Char)0x74,  /* [1392] */
    (xdc_Char)0x61,  /* [1393] */
    (xdc_Char)0x73,  /* [1394] */
    (xdc_Char)0x6b,  /* [1395] */
    (xdc_Char)0x20,  /* [1396] */
    (xdc_Char)0x66,  /* [1397] */
    (xdc_Char)0x72,  /* [1398] */
    (xdc_Char)0x6f,  /* [1399] */
    (xdc_Char)0x6d,  /* [1400] */
    (xdc_Char)0x20,  /* [1401] */
    (xdc_Char)0x48,  /* [1402] */
    (xdc_Char)0x77,  /* [1403] */
    (xdc_Char)0x69,  /* [1404] */
    (xdc_Char)0x20,  /* [1405] */
    (xdc_Char)0x6f,  /* [1406] */
    (xdc_Char)0x72,  /* [1407] */
    (xdc_Char)0x20,  /* [1408] */
    (xdc_Char)0x53,  /* [1409] */
    (xdc_Char)0x77,  /* [1410] */
    (xdc_Char)0x69,  /* [1411] */
    (xdc_Char)0x20,  /* [1412] */
    (xdc_Char)0x74,  /* [1413] */
    (xdc_Char)0x68,  /* [1414] */
    (xdc_Char)0x72,  /* [1415] */
    (xdc_Char)0x65,  /* [1416] */
    (xdc_Char)0x61,  /* [1417] */
    (xdc_Char)0x64,  /* [1418] */
    (xdc_Char)0x2e,  /* [1419] */
    (xdc_Char)0x0,  /* [1420] */
    (xdc_Char)0x41,  /* [1421] */
    (xdc_Char)0x5f,  /* [1422] */
    (xdc_Char)0x62,  /* [1423] */
    (xdc_Char)0x61,  /* [1424] */
    (xdc_Char)0x64,  /* [1425] */
    (xdc_Char)0x54,  /* [1426] */
    (xdc_Char)0x61,  /* [1427] */
    (xdc_Char)0x73,  /* [1428] */
    (xdc_Char)0x6b,  /* [1429] */
    (xdc_Char)0x53,  /* [1430] */
    (xdc_Char)0x74,  /* [1431] */
    (xdc_Char)0x61,  /* [1432] */
    (xdc_Char)0x74,  /* [1433] */
    (xdc_Char)0x65,  /* [1434] */
    (xdc_Char)0x3a,  /* [1435] */
    (xdc_Char)0x20,  /* [1436] */
    (xdc_Char)0x43,  /* [1437] */
    (xdc_Char)0x61,  /* [1438] */
    (xdc_Char)0x6e,  /* [1439] */
    (xdc_Char)0x27,  /* [1440] */
    (xdc_Char)0x74,  /* [1441] */
    (xdc_Char)0x20,  /* [1442] */
    (xdc_Char)0x64,  /* [1443] */
    (xdc_Char)0x65,  /* [1444] */
    (xdc_Char)0x6c,  /* [1445] */
    (xdc_Char)0x65,  /* [1446] */
    (xdc_Char)0x74,  /* [1447] */
    (xdc_Char)0x65,  /* [1448] */
    (xdc_Char)0x20,  /* [1449] */
    (xdc_Char)0x61,  /* [1450] */
    (xdc_Char)0x20,  /* [1451] */
    (xdc_Char)0x74,  /* [1452] */
    (xdc_Char)0x61,  /* [1453] */
    (xdc_Char)0x73,  /* [1454] */
    (xdc_Char)0x6b,  /* [1455] */
    (xdc_Char)0x20,  /* [1456] */
    (xdc_Char)0x69,  /* [1457] */
    (xdc_Char)0x6e,  /* [1458] */
    (xdc_Char)0x20,  /* [1459] */
    (xdc_Char)0x52,  /* [1460] */
    (xdc_Char)0x55,  /* [1461] */
    (xdc_Char)0x4e,  /* [1462] */
    (xdc_Char)0x4e,  /* [1463] */
    (xdc_Char)0x49,  /* [1464] */
    (xdc_Char)0x4e,  /* [1465] */
    (xdc_Char)0x47,  /* [1466] */
    (xdc_Char)0x20,  /* [1467] */
    (xdc_Char)0x73,  /* [1468] */
    (xdc_Char)0x74,  /* [1469] */
    (xdc_Char)0x61,  /* [1470] */
    (xdc_Char)0x74,  /* [1471] */
    (xdc_Char)0x65,  /* [1472] */
    (xdc_Char)0x2e,  /* [1473] */
    (xdc_Char)0x0,  /* [1474] */
    (xdc_Char)0x41,  /* [1475] */
    (xdc_Char)0x5f,  /* [1476] */
    (xdc_Char)0x6e,  /* [1477] */
    (xdc_Char)0x6f,  /* [1478] */
    (xdc_Char)0x50,  /* [1479] */
    (xdc_Char)0x65,  /* [1480] */
    (xdc_Char)0x6e,  /* [1481] */
    (xdc_Char)0x64,  /* [1482] */
    (xdc_Char)0x45,  /* [1483] */
    (xdc_Char)0x6c,  /* [1484] */
    (xdc_Char)0x65,  /* [1485] */
    (xdc_Char)0x6d,  /* [1486] */
    (xdc_Char)0x3a,  /* [1487] */
    (xdc_Char)0x20,  /* [1488] */
    (xdc_Char)0x4e,  /* [1489] */
    (xdc_Char)0x6f,  /* [1490] */
    (xdc_Char)0x74,  /* [1491] */
    (xdc_Char)0x20,  /* [1492] */
    (xdc_Char)0x65,  /* [1493] */
    (xdc_Char)0x6e,  /* [1494] */
    (xdc_Char)0x6f,  /* [1495] */
    (xdc_Char)0x75,  /* [1496] */
    (xdc_Char)0x67,  /* [1497] */
    (xdc_Char)0x68,  /* [1498] */
    (xdc_Char)0x20,  /* [1499] */
    (xdc_Char)0x69,  /* [1500] */
    (xdc_Char)0x6e,  /* [1501] */
    (xdc_Char)0x66,  /* [1502] */
    (xdc_Char)0x6f,  /* [1503] */
    (xdc_Char)0x20,  /* [1504] */
    (xdc_Char)0x74,  /* [1505] */
    (xdc_Char)0x6f,  /* [1506] */
    (xdc_Char)0x20,  /* [1507] */
    (xdc_Char)0x64,  /* [1508] */
    (xdc_Char)0x65,  /* [1509] */
    (xdc_Char)0x6c,  /* [1510] */
    (xdc_Char)0x65,  /* [1511] */
    (xdc_Char)0x74,  /* [1512] */
    (xdc_Char)0x65,  /* [1513] */
    (xdc_Char)0x20,  /* [1514] */
    (xdc_Char)0x42,  /* [1515] */
    (xdc_Char)0x4c,  /* [1516] */
    (xdc_Char)0x4f,  /* [1517] */
    (xdc_Char)0x43,  /* [1518] */
    (xdc_Char)0x4b,  /* [1519] */
    (xdc_Char)0x45,  /* [1520] */
    (xdc_Char)0x44,  /* [1521] */
    (xdc_Char)0x20,  /* [1522] */
    (xdc_Char)0x74,  /* [1523] */
    (xdc_Char)0x61,  /* [1524] */
    (xdc_Char)0x73,  /* [1525] */
    (xdc_Char)0x6b,  /* [1526] */
    (xdc_Char)0x2e,  /* [1527] */
    (xdc_Char)0x0,  /* [1528] */
    (xdc_Char)0x41,  /* [1529] */
    (xdc_Char)0x5f,  /* [1530] */
    (xdc_Char)0x74,  /* [1531] */
    (xdc_Char)0x61,  /* [1532] */
    (xdc_Char)0x73,  /* [1533] */
    (xdc_Char)0x6b,  /* [1534] */
    (xdc_Char)0x44,  /* [1535] */
    (xdc_Char)0x69,  /* [1536] */
    (xdc_Char)0x73,  /* [1537] */
    (xdc_Char)0x61,  /* [1538] */
    (xdc_Char)0x62,  /* [1539] */
    (xdc_Char)0x6c,  /* [1540] */
    (xdc_Char)0x65,  /* [1541] */
    (xdc_Char)0x64,  /* [1542] */
    (xdc_Char)0x3a,  /* [1543] */
    (xdc_Char)0x20,  /* [1544] */
    (xdc_Char)0x43,  /* [1545] */
    (xdc_Char)0x61,  /* [1546] */
    (xdc_Char)0x6e,  /* [1547] */
    (xdc_Char)0x6e,  /* [1548] */
    (xdc_Char)0x6f,  /* [1549] */
    (xdc_Char)0x74,  /* [1550] */
    (xdc_Char)0x20,  /* [1551] */
    (xdc_Char)0x63,  /* [1552] */
    (xdc_Char)0x72,  /* [1553] */
    (xdc_Char)0x65,  /* [1554] */
    (xdc_Char)0x61,  /* [1555] */
    (xdc_Char)0x74,  /* [1556] */
    (xdc_Char)0x65,  /* [1557] */
    (xdc_Char)0x20,  /* [1558] */
    (xdc_Char)0x61,  /* [1559] */
    (xdc_Char)0x20,  /* [1560] */
    (xdc_Char)0x74,  /* [1561] */
    (xdc_Char)0x61,  /* [1562] */
    (xdc_Char)0x73,  /* [1563] */
    (xdc_Char)0x6b,  /* [1564] */
    (xdc_Char)0x20,  /* [1565] */
    (xdc_Char)0x77,  /* [1566] */
    (xdc_Char)0x68,  /* [1567] */
    (xdc_Char)0x65,  /* [1568] */
    (xdc_Char)0x6e,  /* [1569] */
    (xdc_Char)0x20,  /* [1570] */
    (xdc_Char)0x74,  /* [1571] */
    (xdc_Char)0x61,  /* [1572] */
    (xdc_Char)0x73,  /* [1573] */
    (xdc_Char)0x6b,  /* [1574] */
    (xdc_Char)0x69,  /* [1575] */
    (xdc_Char)0x6e,  /* [1576] */
    (xdc_Char)0x67,  /* [1577] */
    (xdc_Char)0x20,  /* [1578] */
    (xdc_Char)0x69,  /* [1579] */
    (xdc_Char)0x73,  /* [1580] */
    (xdc_Char)0x20,  /* [1581] */
    (xdc_Char)0x64,  /* [1582] */
    (xdc_Char)0x69,  /* [1583] */
    (xdc_Char)0x73,  /* [1584] */
    (xdc_Char)0x61,  /* [1585] */
    (xdc_Char)0x62,  /* [1586] */
    (xdc_Char)0x6c,  /* [1587] */
    (xdc_Char)0x65,  /* [1588] */
    (xdc_Char)0x64,  /* [1589] */
    (xdc_Char)0x2e,  /* [1590] */
    (xdc_Char)0x0,  /* [1591] */
    (xdc_Char)0x41,  /* [1592] */
    (xdc_Char)0x5f,  /* [1593] */
    (xdc_Char)0x62,  /* [1594] */
    (xdc_Char)0x61,  /* [1595] */
    (xdc_Char)0x64,  /* [1596] */
    (xdc_Char)0x50,  /* [1597] */
    (xdc_Char)0x72,  /* [1598] */
    (xdc_Char)0x69,  /* [1599] */
    (xdc_Char)0x6f,  /* [1600] */
    (xdc_Char)0x72,  /* [1601] */
    (xdc_Char)0x69,  /* [1602] */
    (xdc_Char)0x74,  /* [1603] */
    (xdc_Char)0x79,  /* [1604] */
    (xdc_Char)0x3a,  /* [1605] */
    (xdc_Char)0x20,  /* [1606] */
    (xdc_Char)0x41,  /* [1607] */
    (xdc_Char)0x6e,  /* [1608] */
    (xdc_Char)0x20,  /* [1609] */
    (xdc_Char)0x69,  /* [1610] */
    (xdc_Char)0x6e,  /* [1611] */
    (xdc_Char)0x76,  /* [1612] */
    (xdc_Char)0x61,  /* [1613] */
    (xdc_Char)0x6c,  /* [1614] */
    (xdc_Char)0x69,  /* [1615] */
    (xdc_Char)0x64,  /* [1616] */
    (xdc_Char)0x20,  /* [1617] */
    (xdc_Char)0x74,  /* [1618] */
    (xdc_Char)0x61,  /* [1619] */
    (xdc_Char)0x73,  /* [1620] */
    (xdc_Char)0x6b,  /* [1621] */
    (xdc_Char)0x20,  /* [1622] */
    (xdc_Char)0x70,  /* [1623] */
    (xdc_Char)0x72,  /* [1624] */
    (xdc_Char)0x69,  /* [1625] */
    (xdc_Char)0x6f,  /* [1626] */
    (xdc_Char)0x72,  /* [1627] */
    (xdc_Char)0x69,  /* [1628] */
    (xdc_Char)0x74,  /* [1629] */
    (xdc_Char)0x79,  /* [1630] */
    (xdc_Char)0x20,  /* [1631] */
    (xdc_Char)0x77,  /* [1632] */
    (xdc_Char)0x61,  /* [1633] */
    (xdc_Char)0x73,  /* [1634] */
    (xdc_Char)0x20,  /* [1635] */
    (xdc_Char)0x75,  /* [1636] */
    (xdc_Char)0x73,  /* [1637] */
    (xdc_Char)0x65,  /* [1638] */
    (xdc_Char)0x64,  /* [1639] */
    (xdc_Char)0x2e,  /* [1640] */
    (xdc_Char)0x0,  /* [1641] */
    (xdc_Char)0x41,  /* [1642] */
    (xdc_Char)0x5f,  /* [1643] */
    (xdc_Char)0x62,  /* [1644] */
    (xdc_Char)0x61,  /* [1645] */
    (xdc_Char)0x64,  /* [1646] */
    (xdc_Char)0x54,  /* [1647] */
    (xdc_Char)0x69,  /* [1648] */
    (xdc_Char)0x6d,  /* [1649] */
    (xdc_Char)0x65,  /* [1650] */
    (xdc_Char)0x6f,  /* [1651] */
    (xdc_Char)0x75,  /* [1652] */
    (xdc_Char)0x74,  /* [1653] */
    (xdc_Char)0x3a,  /* [1654] */
    (xdc_Char)0x20,  /* [1655] */
    (xdc_Char)0x43,  /* [1656] */
    (xdc_Char)0x61,  /* [1657] */
    (xdc_Char)0x6e,  /* [1658] */
    (xdc_Char)0x27,  /* [1659] */
    (xdc_Char)0x74,  /* [1660] */
    (xdc_Char)0x20,  /* [1661] */
    (xdc_Char)0x73,  /* [1662] */
    (xdc_Char)0x6c,  /* [1663] */
    (xdc_Char)0x65,  /* [1664] */
    (xdc_Char)0x65,  /* [1665] */
    (xdc_Char)0x70,  /* [1666] */
    (xdc_Char)0x20,  /* [1667] */
    (xdc_Char)0x46,  /* [1668] */
    (xdc_Char)0x4f,  /* [1669] */
    (xdc_Char)0x52,  /* [1670] */
    (xdc_Char)0x45,  /* [1671] */
    (xdc_Char)0x56,  /* [1672] */
    (xdc_Char)0x45,  /* [1673] */
    (xdc_Char)0x52,  /* [1674] */
    (xdc_Char)0x2e,  /* [1675] */
    (xdc_Char)0x0,  /* [1676] */
    (xdc_Char)0x41,  /* [1677] */
    (xdc_Char)0x5f,  /* [1678] */
    (xdc_Char)0x62,  /* [1679] */
    (xdc_Char)0x61,  /* [1680] */
    (xdc_Char)0x64,  /* [1681] */
    (xdc_Char)0x41,  /* [1682] */
    (xdc_Char)0x66,  /* [1683] */
    (xdc_Char)0x66,  /* [1684] */
    (xdc_Char)0x69,  /* [1685] */
    (xdc_Char)0x6e,  /* [1686] */
    (xdc_Char)0x69,  /* [1687] */
    (xdc_Char)0x74,  /* [1688] */
    (xdc_Char)0x79,  /* [1689] */
    (xdc_Char)0x3a,  /* [1690] */
    (xdc_Char)0x20,  /* [1691] */
    (xdc_Char)0x49,  /* [1692] */
    (xdc_Char)0x6e,  /* [1693] */
    (xdc_Char)0x76,  /* [1694] */
    (xdc_Char)0x61,  /* [1695] */
    (xdc_Char)0x6c,  /* [1696] */
    (xdc_Char)0x69,  /* [1697] */
    (xdc_Char)0x64,  /* [1698] */
    (xdc_Char)0x20,  /* [1699] */
    (xdc_Char)0x61,  /* [1700] */
    (xdc_Char)0x66,  /* [1701] */
    (xdc_Char)0x66,  /* [1702] */
    (xdc_Char)0x69,  /* [1703] */
    (xdc_Char)0x6e,  /* [1704] */
    (xdc_Char)0x69,  /* [1705] */
    (xdc_Char)0x74,  /* [1706] */
    (xdc_Char)0x79,  /* [1707] */
    (xdc_Char)0x2e,  /* [1708] */
    (xdc_Char)0x0,  /* [1709] */
    (xdc_Char)0x41,  /* [1710] */
    (xdc_Char)0x5f,  /* [1711] */
    (xdc_Char)0x73,  /* [1712] */
    (xdc_Char)0x6c,  /* [1713] */
    (xdc_Char)0x65,  /* [1714] */
    (xdc_Char)0x65,  /* [1715] */
    (xdc_Char)0x70,  /* [1716] */
    (xdc_Char)0x54,  /* [1717] */
    (xdc_Char)0x61,  /* [1718] */
    (xdc_Char)0x73,  /* [1719] */
    (xdc_Char)0x6b,  /* [1720] */
    (xdc_Char)0x44,  /* [1721] */
    (xdc_Char)0x69,  /* [1722] */
    (xdc_Char)0x73,  /* [1723] */
    (xdc_Char)0x61,  /* [1724] */
    (xdc_Char)0x62,  /* [1725] */
    (xdc_Char)0x6c,  /* [1726] */
    (xdc_Char)0x65,  /* [1727] */
    (xdc_Char)0x64,  /* [1728] */
    (xdc_Char)0x3a,  /* [1729] */
    (xdc_Char)0x20,  /* [1730] */
    (xdc_Char)0x43,  /* [1731] */
    (xdc_Char)0x61,  /* [1732] */
    (xdc_Char)0x6e,  /* [1733] */
    (xdc_Char)0x6e,  /* [1734] */
    (xdc_Char)0x6f,  /* [1735] */
    (xdc_Char)0x74,  /* [1736] */
    (xdc_Char)0x20,  /* [1737] */
    (xdc_Char)0x63,  /* [1738] */
    (xdc_Char)0x61,  /* [1739] */
    (xdc_Char)0x6c,  /* [1740] */
    (xdc_Char)0x6c,  /* [1741] */
    (xdc_Char)0x20,  /* [1742] */
    (xdc_Char)0x54,  /* [1743] */
    (xdc_Char)0x61,  /* [1744] */
    (xdc_Char)0x73,  /* [1745] */
    (xdc_Char)0x6b,  /* [1746] */
    (xdc_Char)0x5f,  /* [1747] */
    (xdc_Char)0x73,  /* [1748] */
    (xdc_Char)0x6c,  /* [1749] */
    (xdc_Char)0x65,  /* [1750] */
    (xdc_Char)0x65,  /* [1751] */
    (xdc_Char)0x70,  /* [1752] */
    (xdc_Char)0x28,  /* [1753] */
    (xdc_Char)0x29,  /* [1754] */
    (xdc_Char)0x20,  /* [1755] */
    (xdc_Char)0x77,  /* [1756] */
    (xdc_Char)0x68,  /* [1757] */
    (xdc_Char)0x69,  /* [1758] */
    (xdc_Char)0x6c,  /* [1759] */
    (xdc_Char)0x65,  /* [1760] */
    (xdc_Char)0x20,  /* [1761] */
    (xdc_Char)0x74,  /* [1762] */
    (xdc_Char)0x68,  /* [1763] */
    (xdc_Char)0x65,  /* [1764] */
    (xdc_Char)0x20,  /* [1765] */
    (xdc_Char)0x54,  /* [1766] */
    (xdc_Char)0x61,  /* [1767] */
    (xdc_Char)0x73,  /* [1768] */
    (xdc_Char)0x6b,  /* [1769] */
    (xdc_Char)0x20,  /* [1770] */
    (xdc_Char)0x73,  /* [1771] */
    (xdc_Char)0x63,  /* [1772] */
    (xdc_Char)0x68,  /* [1773] */
    (xdc_Char)0x65,  /* [1774] */
    (xdc_Char)0x64,  /* [1775] */
    (xdc_Char)0x75,  /* [1776] */
    (xdc_Char)0x6c,  /* [1777] */
    (xdc_Char)0x65,  /* [1778] */
    (xdc_Char)0x72,  /* [1779] */
    (xdc_Char)0x20,  /* [1780] */
    (xdc_Char)0x69,  /* [1781] */
    (xdc_Char)0x73,  /* [1782] */
    (xdc_Char)0x20,  /* [1783] */
    (xdc_Char)0x64,  /* [1784] */
    (xdc_Char)0x69,  /* [1785] */
    (xdc_Char)0x73,  /* [1786] */
    (xdc_Char)0x61,  /* [1787] */
    (xdc_Char)0x62,  /* [1788] */
    (xdc_Char)0x6c,  /* [1789] */
    (xdc_Char)0x65,  /* [1790] */
    (xdc_Char)0x64,  /* [1791] */
    (xdc_Char)0x2e,  /* [1792] */
    (xdc_Char)0x0,  /* [1793] */
    (xdc_Char)0x41,  /* [1794] */
    (xdc_Char)0x5f,  /* [1795] */
    (xdc_Char)0x69,  /* [1796] */
    (xdc_Char)0x6e,  /* [1797] */
    (xdc_Char)0x76,  /* [1798] */
    (xdc_Char)0x61,  /* [1799] */
    (xdc_Char)0x6c,  /* [1800] */
    (xdc_Char)0x69,  /* [1801] */
    (xdc_Char)0x64,  /* [1802] */
    (xdc_Char)0x43,  /* [1803] */
    (xdc_Char)0x6f,  /* [1804] */
    (xdc_Char)0x72,  /* [1805] */
    (xdc_Char)0x65,  /* [1806] */
    (xdc_Char)0x49,  /* [1807] */
    (xdc_Char)0x64,  /* [1808] */
    (xdc_Char)0x3a,  /* [1809] */
    (xdc_Char)0x20,  /* [1810] */
    (xdc_Char)0x43,  /* [1811] */
    (xdc_Char)0x61,  /* [1812] */
    (xdc_Char)0x6e,  /* [1813] */
    (xdc_Char)0x6e,  /* [1814] */
    (xdc_Char)0x6f,  /* [1815] */
    (xdc_Char)0x74,  /* [1816] */
    (xdc_Char)0x20,  /* [1817] */
    (xdc_Char)0x70,  /* [1818] */
    (xdc_Char)0x61,  /* [1819] */
    (xdc_Char)0x73,  /* [1820] */
    (xdc_Char)0x73,  /* [1821] */
    (xdc_Char)0x20,  /* [1822] */
    (xdc_Char)0x61,  /* [1823] */
    (xdc_Char)0x20,  /* [1824] */
    (xdc_Char)0x6e,  /* [1825] */
    (xdc_Char)0x6f,  /* [1826] */
    (xdc_Char)0x6e,  /* [1827] */
    (xdc_Char)0x2d,  /* [1828] */
    (xdc_Char)0x7a,  /* [1829] */
    (xdc_Char)0x65,  /* [1830] */
    (xdc_Char)0x72,  /* [1831] */
    (xdc_Char)0x6f,  /* [1832] */
    (xdc_Char)0x20,  /* [1833] */
    (xdc_Char)0x43,  /* [1834] */
    (xdc_Char)0x6f,  /* [1835] */
    (xdc_Char)0x72,  /* [1836] */
    (xdc_Char)0x65,  /* [1837] */
    (xdc_Char)0x49,  /* [1838] */
    (xdc_Char)0x64,  /* [1839] */
    (xdc_Char)0x20,  /* [1840] */
    (xdc_Char)0x69,  /* [1841] */
    (xdc_Char)0x6e,  /* [1842] */
    (xdc_Char)0x20,  /* [1843] */
    (xdc_Char)0x61,  /* [1844] */
    (xdc_Char)0x20,  /* [1845] */
    (xdc_Char)0x6e,  /* [1846] */
    (xdc_Char)0x6f,  /* [1847] */
    (xdc_Char)0x6e,  /* [1848] */
    (xdc_Char)0x2d,  /* [1849] */
    (xdc_Char)0x53,  /* [1850] */
    (xdc_Char)0x4d,  /* [1851] */
    (xdc_Char)0x50,  /* [1852] */
    (xdc_Char)0x20,  /* [1853] */
    (xdc_Char)0x61,  /* [1854] */
    (xdc_Char)0x70,  /* [1855] */
    (xdc_Char)0x70,  /* [1856] */
    (xdc_Char)0x6c,  /* [1857] */
    (xdc_Char)0x69,  /* [1858] */
    (xdc_Char)0x63,  /* [1859] */
    (xdc_Char)0x61,  /* [1860] */
    (xdc_Char)0x74,  /* [1861] */
    (xdc_Char)0x69,  /* [1862] */
    (xdc_Char)0x6f,  /* [1863] */
    (xdc_Char)0x6e,  /* [1864] */
    (xdc_Char)0x2e,  /* [1865] */
    (xdc_Char)0x0,  /* [1866] */
    (xdc_Char)0x41,  /* [1867] */
    (xdc_Char)0x5f,  /* [1868] */
    (xdc_Char)0x75,  /* [1869] */
    (xdc_Char)0x6e,  /* [1870] */
    (xdc_Char)0x73,  /* [1871] */
    (xdc_Char)0x75,  /* [1872] */
    (xdc_Char)0x70,  /* [1873] */
    (xdc_Char)0x70,  /* [1874] */
    (xdc_Char)0x6f,  /* [1875] */
    (xdc_Char)0x72,  /* [1876] */
    (xdc_Char)0x74,  /* [1877] */
    (xdc_Char)0x65,  /* [1878] */
    (xdc_Char)0x64,  /* [1879] */
    (xdc_Char)0x4d,  /* [1880] */
    (xdc_Char)0x61,  /* [1881] */
    (xdc_Char)0x73,  /* [1882] */
    (xdc_Char)0x6b,  /* [1883] */
    (xdc_Char)0x69,  /* [1884] */
    (xdc_Char)0x6e,  /* [1885] */
    (xdc_Char)0x67,  /* [1886] */
    (xdc_Char)0x4f,  /* [1887] */
    (xdc_Char)0x70,  /* [1888] */
    (xdc_Char)0x74,  /* [1889] */
    (xdc_Char)0x69,  /* [1890] */
    (xdc_Char)0x6f,  /* [1891] */
    (xdc_Char)0x6e,  /* [1892] */
    (xdc_Char)0x3a,  /* [1893] */
    (xdc_Char)0x20,  /* [1894] */
    (xdc_Char)0x75,  /* [1895] */
    (xdc_Char)0x6e,  /* [1896] */
    (xdc_Char)0x73,  /* [1897] */
    (xdc_Char)0x75,  /* [1898] */
    (xdc_Char)0x70,  /* [1899] */
    (xdc_Char)0x70,  /* [1900] */
    (xdc_Char)0x6f,  /* [1901] */
    (xdc_Char)0x72,  /* [1902] */
    (xdc_Char)0x74,  /* [1903] */
    (xdc_Char)0x65,  /* [1904] */
    (xdc_Char)0x64,  /* [1905] */
    (xdc_Char)0x20,  /* [1906] */
    (xdc_Char)0x6d,  /* [1907] */
    (xdc_Char)0x61,  /* [1908] */
    (xdc_Char)0x73,  /* [1909] */
    (xdc_Char)0x6b,  /* [1910] */
    (xdc_Char)0x53,  /* [1911] */
    (xdc_Char)0x65,  /* [1912] */
    (xdc_Char)0x74,  /* [1913] */
    (xdc_Char)0x74,  /* [1914] */
    (xdc_Char)0x69,  /* [1915] */
    (xdc_Char)0x6e,  /* [1916] */
    (xdc_Char)0x67,  /* [1917] */
    (xdc_Char)0x2e,  /* [1918] */
    (xdc_Char)0x0,  /* [1919] */
    (xdc_Char)0x62,  /* [1920] */
    (xdc_Char)0x75,  /* [1921] */
    (xdc_Char)0x66,  /* [1922] */
    (xdc_Char)0x20,  /* [1923] */
    (xdc_Char)0x70,  /* [1924] */
    (xdc_Char)0x61,  /* [1925] */
    (xdc_Char)0x72,  /* [1926] */
    (xdc_Char)0x61,  /* [1927] */
    (xdc_Char)0x6d,  /* [1928] */
    (xdc_Char)0x65,  /* [1929] */
    (xdc_Char)0x74,  /* [1930] */
    (xdc_Char)0x65,  /* [1931] */
    (xdc_Char)0x72,  /* [1932] */
    (xdc_Char)0x20,  /* [1933] */
    (xdc_Char)0x63,  /* [1934] */
    (xdc_Char)0x61,  /* [1935] */
    (xdc_Char)0x6e,  /* [1936] */
    (xdc_Char)0x6e,  /* [1937] */
    (xdc_Char)0x6f,  /* [1938] */
    (xdc_Char)0x74,  /* [1939] */
    (xdc_Char)0x20,  /* [1940] */
    (xdc_Char)0x62,  /* [1941] */
    (xdc_Char)0x65,  /* [1942] */
    (xdc_Char)0x20,  /* [1943] */
    (xdc_Char)0x6e,  /* [1944] */
    (xdc_Char)0x75,  /* [1945] */
    (xdc_Char)0x6c,  /* [1946] */
    (xdc_Char)0x6c,  /* [1947] */
    (xdc_Char)0x0,  /* [1948] */
    (xdc_Char)0x62,  /* [1949] */
    (xdc_Char)0x75,  /* [1950] */
    (xdc_Char)0x66,  /* [1951] */
    (xdc_Char)0x20,  /* [1952] */
    (xdc_Char)0x6e,  /* [1953] */
    (xdc_Char)0x6f,  /* [1954] */
    (xdc_Char)0x74,  /* [1955] */
    (xdc_Char)0x20,  /* [1956] */
    (xdc_Char)0x70,  /* [1957] */
    (xdc_Char)0x72,  /* [1958] */
    (xdc_Char)0x6f,  /* [1959] */
    (xdc_Char)0x70,  /* [1960] */
    (xdc_Char)0x65,  /* [1961] */
    (xdc_Char)0x72,  /* [1962] */
    (xdc_Char)0x6c,  /* [1963] */
    (xdc_Char)0x79,  /* [1964] */
    (xdc_Char)0x20,  /* [1965] */
    (xdc_Char)0x61,  /* [1966] */
    (xdc_Char)0x6c,  /* [1967] */
    (xdc_Char)0x69,  /* [1968] */
    (xdc_Char)0x67,  /* [1969] */
    (xdc_Char)0x6e,  /* [1970] */
    (xdc_Char)0x65,  /* [1971] */
    (xdc_Char)0x64,  /* [1972] */
    (xdc_Char)0x0,  /* [1973] */
    (xdc_Char)0x61,  /* [1974] */
    (xdc_Char)0x6c,  /* [1975] */
    (xdc_Char)0x69,  /* [1976] */
    (xdc_Char)0x67,  /* [1977] */
    (xdc_Char)0x6e,  /* [1978] */
    (xdc_Char)0x20,  /* [1979] */
    (xdc_Char)0x70,  /* [1980] */
    (xdc_Char)0x61,  /* [1981] */
    (xdc_Char)0x72,  /* [1982] */
    (xdc_Char)0x61,  /* [1983] */
    (xdc_Char)0x6d,  /* [1984] */
    (xdc_Char)0x65,  /* [1985] */
    (xdc_Char)0x74,  /* [1986] */
    (xdc_Char)0x65,  /* [1987] */
    (xdc_Char)0x72,  /* [1988] */
    (xdc_Char)0x20,  /* [1989] */
    (xdc_Char)0x6d,  /* [1990] */
    (xdc_Char)0x75,  /* [1991] */
    (xdc_Char)0x73,  /* [1992] */
    (xdc_Char)0x74,  /* [1993] */
    (xdc_Char)0x20,  /* [1994] */
    (xdc_Char)0x62,  /* [1995] */
    (xdc_Char)0x65,  /* [1996] */
    (xdc_Char)0x20,  /* [1997] */
    (xdc_Char)0x30,  /* [1998] */
    (xdc_Char)0x20,  /* [1999] */
    (xdc_Char)0x6f,  /* [2000] */
    (xdc_Char)0x72,  /* [2001] */
    (xdc_Char)0x20,  /* [2002] */
    (xdc_Char)0x61,  /* [2003] */
    (xdc_Char)0x20,  /* [2004] */
    (xdc_Char)0x70,  /* [2005] */
    (xdc_Char)0x6f,  /* [2006] */
    (xdc_Char)0x77,  /* [2007] */
    (xdc_Char)0x65,  /* [2008] */
    (xdc_Char)0x72,  /* [2009] */
    (xdc_Char)0x20,  /* [2010] */
    (xdc_Char)0x6f,  /* [2011] */
    (xdc_Char)0x66,  /* [2012] */
    (xdc_Char)0x20,  /* [2013] */
    (xdc_Char)0x32,  /* [2014] */
    (xdc_Char)0x20,  /* [2015] */
    (xdc_Char)0x3e,  /* [2016] */
    (xdc_Char)0x3d,  /* [2017] */
    (xdc_Char)0x20,  /* [2018] */
    (xdc_Char)0x74,  /* [2019] */
    (xdc_Char)0x68,  /* [2020] */
    (xdc_Char)0x65,  /* [2021] */
    (xdc_Char)0x20,  /* [2022] */
    (xdc_Char)0x76,  /* [2023] */
    (xdc_Char)0x61,  /* [2024] */
    (xdc_Char)0x6c,  /* [2025] */
    (xdc_Char)0x75,  /* [2026] */
    (xdc_Char)0x65,  /* [2027] */
    (xdc_Char)0x20,  /* [2028] */
    (xdc_Char)0x6f,  /* [2029] */
    (xdc_Char)0x66,  /* [2030] */
    (xdc_Char)0x20,  /* [2031] */
    (xdc_Char)0x4d,  /* [2032] */
    (xdc_Char)0x65,  /* [2033] */
    (xdc_Char)0x6d,  /* [2034] */
    (xdc_Char)0x6f,  /* [2035] */
    (xdc_Char)0x72,  /* [2036] */
    (xdc_Char)0x79,  /* [2037] */
    (xdc_Char)0x5f,  /* [2038] */
    (xdc_Char)0x67,  /* [2039] */
    (xdc_Char)0x65,  /* [2040] */
    (xdc_Char)0x74,  /* [2041] */
    (xdc_Char)0x4d,  /* [2042] */
    (xdc_Char)0x61,  /* [2043] */
    (xdc_Char)0x78,  /* [2044] */
    (xdc_Char)0x44,  /* [2045] */
    (xdc_Char)0x65,  /* [2046] */
    (xdc_Char)0x66,  /* [2047] */
    (xdc_Char)0x61,  /* [2048] */
    (xdc_Char)0x75,  /* [2049] */
    (xdc_Char)0x6c,  /* [2050] */
    (xdc_Char)0x74,  /* [2051] */
    (xdc_Char)0x54,  /* [2052] */
    (xdc_Char)0x79,  /* [2053] */
    (xdc_Char)0x70,  /* [2054] */
    (xdc_Char)0x65,  /* [2055] */
    (xdc_Char)0x41,  /* [2056] */
    (xdc_Char)0x6c,  /* [2057] */
    (xdc_Char)0x69,  /* [2058] */
    (xdc_Char)0x67,  /* [2059] */
    (xdc_Char)0x6e,  /* [2060] */
    (xdc_Char)0x28,  /* [2061] */
    (xdc_Char)0x29,  /* [2062] */
    (xdc_Char)0x0,  /* [2063] */
    (xdc_Char)0x61,  /* [2064] */
    (xdc_Char)0x6c,  /* [2065] */
    (xdc_Char)0x69,  /* [2066] */
    (xdc_Char)0x67,  /* [2067] */
    (xdc_Char)0x6e,  /* [2068] */
    (xdc_Char)0x20,  /* [2069] */
    (xdc_Char)0x70,  /* [2070] */
    (xdc_Char)0x61,  /* [2071] */
    (xdc_Char)0x72,  /* [2072] */
    (xdc_Char)0x61,  /* [2073] */
    (xdc_Char)0x6d,  /* [2074] */
    (xdc_Char)0x65,  /* [2075] */
    (xdc_Char)0x74,  /* [2076] */
    (xdc_Char)0x65,  /* [2077] */
    (xdc_Char)0x72,  /* [2078] */
    (xdc_Char)0x20,  /* [2079] */
    (xdc_Char)0x31,  /* [2080] */
    (xdc_Char)0x29,  /* [2081] */
    (xdc_Char)0x20,  /* [2082] */
    (xdc_Char)0x6d,  /* [2083] */
    (xdc_Char)0x75,  /* [2084] */
    (xdc_Char)0x73,  /* [2085] */
    (xdc_Char)0x74,  /* [2086] */
    (xdc_Char)0x20,  /* [2087] */
    (xdc_Char)0x62,  /* [2088] */
    (xdc_Char)0x65,  /* [2089] */
    (xdc_Char)0x20,  /* [2090] */
    (xdc_Char)0x30,  /* [2091] */
    (xdc_Char)0x20,  /* [2092] */
    (xdc_Char)0x6f,  /* [2093] */
    (xdc_Char)0x72,  /* [2094] */
    (xdc_Char)0x20,  /* [2095] */
    (xdc_Char)0x61,  /* [2096] */
    (xdc_Char)0x20,  /* [2097] */
    (xdc_Char)0x70,  /* [2098] */
    (xdc_Char)0x6f,  /* [2099] */
    (xdc_Char)0x77,  /* [2100] */
    (xdc_Char)0x65,  /* [2101] */
    (xdc_Char)0x72,  /* [2102] */
    (xdc_Char)0x20,  /* [2103] */
    (xdc_Char)0x6f,  /* [2104] */
    (xdc_Char)0x66,  /* [2105] */
    (xdc_Char)0x20,  /* [2106] */
    (xdc_Char)0x32,  /* [2107] */
    (xdc_Char)0x20,  /* [2108] */
    (xdc_Char)0x61,  /* [2109] */
    (xdc_Char)0x6e,  /* [2110] */
    (xdc_Char)0x64,  /* [2111] */
    (xdc_Char)0x20,  /* [2112] */
    (xdc_Char)0x32,  /* [2113] */
    (xdc_Char)0x29,  /* [2114] */
    (xdc_Char)0x20,  /* [2115] */
    (xdc_Char)0x6e,  /* [2116] */
    (xdc_Char)0x6f,  /* [2117] */
    (xdc_Char)0x74,  /* [2118] */
    (xdc_Char)0x20,  /* [2119] */
    (xdc_Char)0x67,  /* [2120] */
    (xdc_Char)0x72,  /* [2121] */
    (xdc_Char)0x65,  /* [2122] */
    (xdc_Char)0x61,  /* [2123] */
    (xdc_Char)0x74,  /* [2124] */
    (xdc_Char)0x65,  /* [2125] */
    (xdc_Char)0x72,  /* [2126] */
    (xdc_Char)0x20,  /* [2127] */
    (xdc_Char)0x74,  /* [2128] */
    (xdc_Char)0x68,  /* [2129] */
    (xdc_Char)0x61,  /* [2130] */
    (xdc_Char)0x6e,  /* [2131] */
    (xdc_Char)0x20,  /* [2132] */
    (xdc_Char)0x74,  /* [2133] */
    (xdc_Char)0x68,  /* [2134] */
    (xdc_Char)0x65,  /* [2135] */
    (xdc_Char)0x20,  /* [2136] */
    (xdc_Char)0x68,  /* [2137] */
    (xdc_Char)0x65,  /* [2138] */
    (xdc_Char)0x61,  /* [2139] */
    (xdc_Char)0x70,  /* [2140] */
    (xdc_Char)0x73,  /* [2141] */
    (xdc_Char)0x20,  /* [2142] */
    (xdc_Char)0x61,  /* [2143] */
    (xdc_Char)0x6c,  /* [2144] */
    (xdc_Char)0x69,  /* [2145] */
    (xdc_Char)0x67,  /* [2146] */
    (xdc_Char)0x6e,  /* [2147] */
    (xdc_Char)0x6d,  /* [2148] */
    (xdc_Char)0x65,  /* [2149] */
    (xdc_Char)0x6e,  /* [2150] */
    (xdc_Char)0x74,  /* [2151] */
    (xdc_Char)0x0,  /* [2152] */
    (xdc_Char)0x62,  /* [2153] */
    (xdc_Char)0x6c,  /* [2154] */
    (xdc_Char)0x6f,  /* [2155] */
    (xdc_Char)0x63,  /* [2156] */
    (xdc_Char)0x6b,  /* [2157] */
    (xdc_Char)0x53,  /* [2158] */
    (xdc_Char)0x69,  /* [2159] */
    (xdc_Char)0x7a,  /* [2160] */
    (xdc_Char)0x65,  /* [2161] */
    (xdc_Char)0x20,  /* [2162] */
    (xdc_Char)0x63,  /* [2163] */
    (xdc_Char)0x61,  /* [2164] */
    (xdc_Char)0x6e,  /* [2165] */
    (xdc_Char)0x6e,  /* [2166] */
    (xdc_Char)0x6f,  /* [2167] */
    (xdc_Char)0x74,  /* [2168] */
    (xdc_Char)0x20,  /* [2169] */
    (xdc_Char)0x62,  /* [2170] */
    (xdc_Char)0x65,  /* [2171] */
    (xdc_Char)0x20,  /* [2172] */
    (xdc_Char)0x7a,  /* [2173] */
    (xdc_Char)0x65,  /* [2174] */
    (xdc_Char)0x72,  /* [2175] */
    (xdc_Char)0x6f,  /* [2176] */
    (xdc_Char)0x0,  /* [2177] */
    (xdc_Char)0x6e,  /* [2178] */
    (xdc_Char)0x75,  /* [2179] */
    (xdc_Char)0x6d,  /* [2180] */
    (xdc_Char)0x42,  /* [2181] */
    (xdc_Char)0x6c,  /* [2182] */
    (xdc_Char)0x6f,  /* [2183] */
    (xdc_Char)0x63,  /* [2184] */
    (xdc_Char)0x6b,  /* [2185] */
    (xdc_Char)0x73,  /* [2186] */
    (xdc_Char)0x20,  /* [2187] */
    (xdc_Char)0x63,  /* [2188] */
    (xdc_Char)0x61,  /* [2189] */
    (xdc_Char)0x6e,  /* [2190] */
    (xdc_Char)0x6e,  /* [2191] */
    (xdc_Char)0x6f,  /* [2192] */
    (xdc_Char)0x74,  /* [2193] */
    (xdc_Char)0x20,  /* [2194] */
    (xdc_Char)0x62,  /* [2195] */
    (xdc_Char)0x65,  /* [2196] */
    (xdc_Char)0x20,  /* [2197] */
    (xdc_Char)0x7a,  /* [2198] */
    (xdc_Char)0x65,  /* [2199] */
    (xdc_Char)0x72,  /* [2200] */
    (xdc_Char)0x6f,  /* [2201] */
    (xdc_Char)0x0,  /* [2202] */
    (xdc_Char)0x62,  /* [2203] */
    (xdc_Char)0x75,  /* [2204] */
    (xdc_Char)0x66,  /* [2205] */
    (xdc_Char)0x53,  /* [2206] */
    (xdc_Char)0x69,  /* [2207] */
    (xdc_Char)0x7a,  /* [2208] */
    (xdc_Char)0x65,  /* [2209] */
    (xdc_Char)0x20,  /* [2210] */
    (xdc_Char)0x63,  /* [2211] */
    (xdc_Char)0x61,  /* [2212] */
    (xdc_Char)0x6e,  /* [2213] */
    (xdc_Char)0x6e,  /* [2214] */
    (xdc_Char)0x6f,  /* [2215] */
    (xdc_Char)0x74,  /* [2216] */
    (xdc_Char)0x20,  /* [2217] */
    (xdc_Char)0x62,  /* [2218] */
    (xdc_Char)0x65,  /* [2219] */
    (xdc_Char)0x20,  /* [2220] */
    (xdc_Char)0x7a,  /* [2221] */
    (xdc_Char)0x65,  /* [2222] */
    (xdc_Char)0x72,  /* [2223] */
    (xdc_Char)0x6f,  /* [2224] */
    (xdc_Char)0x0,  /* [2225] */
    (xdc_Char)0x48,  /* [2226] */
    (xdc_Char)0x65,  /* [2227] */
    (xdc_Char)0x61,  /* [2228] */
    (xdc_Char)0x70,  /* [2229] */
    (xdc_Char)0x42,  /* [2230] */
    (xdc_Char)0x75,  /* [2231] */
    (xdc_Char)0x66,  /* [2232] */
    (xdc_Char)0x5f,  /* [2233] */
    (xdc_Char)0x63,  /* [2234] */
    (xdc_Char)0x72,  /* [2235] */
    (xdc_Char)0x65,  /* [2236] */
    (xdc_Char)0x61,  /* [2237] */
    (xdc_Char)0x74,  /* [2238] */
    (xdc_Char)0x65,  /* [2239] */
    (xdc_Char)0x27,  /* [2240] */
    (xdc_Char)0x73,  /* [2241] */
    (xdc_Char)0x20,  /* [2242] */
    (xdc_Char)0x62,  /* [2243] */
    (xdc_Char)0x75,  /* [2244] */
    (xdc_Char)0x66,  /* [2245] */
    (xdc_Char)0x53,  /* [2246] */
    (xdc_Char)0x69,  /* [2247] */
    (xdc_Char)0x7a,  /* [2248] */
    (xdc_Char)0x65,  /* [2249] */
    (xdc_Char)0x20,  /* [2250] */
    (xdc_Char)0x70,  /* [2251] */
    (xdc_Char)0x61,  /* [2252] */
    (xdc_Char)0x72,  /* [2253] */
    (xdc_Char)0x61,  /* [2254] */
    (xdc_Char)0x6d,  /* [2255] */
    (xdc_Char)0x65,  /* [2256] */
    (xdc_Char)0x74,  /* [2257] */
    (xdc_Char)0x65,  /* [2258] */
    (xdc_Char)0x72,  /* [2259] */
    (xdc_Char)0x20,  /* [2260] */
    (xdc_Char)0x69,  /* [2261] */
    (xdc_Char)0x73,  /* [2262] */
    (xdc_Char)0x20,  /* [2263] */
    (xdc_Char)0x69,  /* [2264] */
    (xdc_Char)0x6e,  /* [2265] */
    (xdc_Char)0x76,  /* [2266] */
    (xdc_Char)0x61,  /* [2267] */
    (xdc_Char)0x6c,  /* [2268] */
    (xdc_Char)0x69,  /* [2269] */
    (xdc_Char)0x64,  /* [2270] */
    (xdc_Char)0x20,  /* [2271] */
    (xdc_Char)0x28,  /* [2272] */
    (xdc_Char)0x74,  /* [2273] */
    (xdc_Char)0x6f,  /* [2274] */
    (xdc_Char)0x6f,  /* [2275] */
    (xdc_Char)0x20,  /* [2276] */
    (xdc_Char)0x73,  /* [2277] */
    (xdc_Char)0x6d,  /* [2278] */
    (xdc_Char)0x61,  /* [2279] */
    (xdc_Char)0x6c,  /* [2280] */
    (xdc_Char)0x6c,  /* [2281] */
    (xdc_Char)0x29,  /* [2282] */
    (xdc_Char)0x0,  /* [2283] */
    (xdc_Char)0x43,  /* [2284] */
    (xdc_Char)0x61,  /* [2285] */
    (xdc_Char)0x6e,  /* [2286] */
    (xdc_Char)0x6e,  /* [2287] */
    (xdc_Char)0x6f,  /* [2288] */
    (xdc_Char)0x74,  /* [2289] */
    (xdc_Char)0x20,  /* [2290] */
    (xdc_Char)0x63,  /* [2291] */
    (xdc_Char)0x61,  /* [2292] */
    (xdc_Char)0x6c,  /* [2293] */
    (xdc_Char)0x6c,  /* [2294] */
    (xdc_Char)0x20,  /* [2295] */
    (xdc_Char)0x48,  /* [2296] */
    (xdc_Char)0x65,  /* [2297] */
    (xdc_Char)0x61,  /* [2298] */
    (xdc_Char)0x70,  /* [2299] */
    (xdc_Char)0x42,  /* [2300] */
    (xdc_Char)0x75,  /* [2301] */
    (xdc_Char)0x66,  /* [2302] */
    (xdc_Char)0x5f,  /* [2303] */
    (xdc_Char)0x66,  /* [2304] */
    (xdc_Char)0x72,  /* [2305] */
    (xdc_Char)0x65,  /* [2306] */
    (xdc_Char)0x65,  /* [2307] */
    (xdc_Char)0x20,  /* [2308] */
    (xdc_Char)0x77,  /* [2309] */
    (xdc_Char)0x68,  /* [2310] */
    (xdc_Char)0x65,  /* [2311] */
    (xdc_Char)0x6e,  /* [2312] */
    (xdc_Char)0x20,  /* [2313] */
    (xdc_Char)0x6e,  /* [2314] */
    (xdc_Char)0x6f,  /* [2315] */
    (xdc_Char)0x20,  /* [2316] */
    (xdc_Char)0x62,  /* [2317] */
    (xdc_Char)0x6c,  /* [2318] */
    (xdc_Char)0x6f,  /* [2319] */
    (xdc_Char)0x63,  /* [2320] */
    (xdc_Char)0x6b,  /* [2321] */
    (xdc_Char)0x73,  /* [2322] */
    (xdc_Char)0x20,  /* [2323] */
    (xdc_Char)0x68,  /* [2324] */
    (xdc_Char)0x61,  /* [2325] */
    (xdc_Char)0x76,  /* [2326] */
    (xdc_Char)0x65,  /* [2327] */
    (xdc_Char)0x20,  /* [2328] */
    (xdc_Char)0x62,  /* [2329] */
    (xdc_Char)0x65,  /* [2330] */
    (xdc_Char)0x65,  /* [2331] */
    (xdc_Char)0x6e,  /* [2332] */
    (xdc_Char)0x20,  /* [2333] */
    (xdc_Char)0x61,  /* [2334] */
    (xdc_Char)0x6c,  /* [2335] */
    (xdc_Char)0x6c,  /* [2336] */
    (xdc_Char)0x6f,  /* [2337] */
    (xdc_Char)0x63,  /* [2338] */
    (xdc_Char)0x61,  /* [2339] */
    (xdc_Char)0x74,  /* [2340] */
    (xdc_Char)0x65,  /* [2341] */
    (xdc_Char)0x64,  /* [2342] */
    (xdc_Char)0x0,  /* [2343] */
    (xdc_Char)0x41,  /* [2344] */
    (xdc_Char)0x5f,  /* [2345] */
    (xdc_Char)0x69,  /* [2346] */
    (xdc_Char)0x6e,  /* [2347] */
    (xdc_Char)0x76,  /* [2348] */
    (xdc_Char)0x61,  /* [2349] */
    (xdc_Char)0x6c,  /* [2350] */
    (xdc_Char)0x69,  /* [2351] */
    (xdc_Char)0x64,  /* [2352] */
    (xdc_Char)0x46,  /* [2353] */
    (xdc_Char)0x72,  /* [2354] */
    (xdc_Char)0x65,  /* [2355] */
    (xdc_Char)0x65,  /* [2356] */
    (xdc_Char)0x3a,  /* [2357] */
    (xdc_Char)0x20,  /* [2358] */
    (xdc_Char)0x49,  /* [2359] */
    (xdc_Char)0x6e,  /* [2360] */
    (xdc_Char)0x76,  /* [2361] */
    (xdc_Char)0x61,  /* [2362] */
    (xdc_Char)0x6c,  /* [2363] */
    (xdc_Char)0x69,  /* [2364] */
    (xdc_Char)0x64,  /* [2365] */
    (xdc_Char)0x20,  /* [2366] */
    (xdc_Char)0x66,  /* [2367] */
    (xdc_Char)0x72,  /* [2368] */
    (xdc_Char)0x65,  /* [2369] */
    (xdc_Char)0x65,  /* [2370] */
    (xdc_Char)0x0,  /* [2371] */
    (xdc_Char)0x41,  /* [2372] */
    (xdc_Char)0x5f,  /* [2373] */
    (xdc_Char)0x7a,  /* [2374] */
    (xdc_Char)0x65,  /* [2375] */
    (xdc_Char)0x72,  /* [2376] */
    (xdc_Char)0x6f,  /* [2377] */
    (xdc_Char)0x42,  /* [2378] */
    (xdc_Char)0x6c,  /* [2379] */
    (xdc_Char)0x6f,  /* [2380] */
    (xdc_Char)0x63,  /* [2381] */
    (xdc_Char)0x6b,  /* [2382] */
    (xdc_Char)0x3a,  /* [2383] */
    (xdc_Char)0x20,  /* [2384] */
    (xdc_Char)0x43,  /* [2385] */
    (xdc_Char)0x61,  /* [2386] */
    (xdc_Char)0x6e,  /* [2387] */
    (xdc_Char)0x6e,  /* [2388] */
    (xdc_Char)0x6f,  /* [2389] */
    (xdc_Char)0x74,  /* [2390] */
    (xdc_Char)0x20,  /* [2391] */
    (xdc_Char)0x61,  /* [2392] */
    (xdc_Char)0x6c,  /* [2393] */
    (xdc_Char)0x6c,  /* [2394] */
    (xdc_Char)0x6f,  /* [2395] */
    (xdc_Char)0x63,  /* [2396] */
    (xdc_Char)0x61,  /* [2397] */
    (xdc_Char)0x74,  /* [2398] */
    (xdc_Char)0x65,  /* [2399] */
    (xdc_Char)0x20,  /* [2400] */
    (xdc_Char)0x73,  /* [2401] */
    (xdc_Char)0x69,  /* [2402] */
    (xdc_Char)0x7a,  /* [2403] */
    (xdc_Char)0x65,  /* [2404] */
    (xdc_Char)0x20,  /* [2405] */
    (xdc_Char)0x30,  /* [2406] */
    (xdc_Char)0x0,  /* [2407] */
    (xdc_Char)0x41,  /* [2408] */
    (xdc_Char)0x5f,  /* [2409] */
    (xdc_Char)0x68,  /* [2410] */
    (xdc_Char)0x65,  /* [2411] */
    (xdc_Char)0x61,  /* [2412] */
    (xdc_Char)0x70,  /* [2413] */
    (xdc_Char)0x53,  /* [2414] */
    (xdc_Char)0x69,  /* [2415] */
    (xdc_Char)0x7a,  /* [2416] */
    (xdc_Char)0x65,  /* [2417] */
    (xdc_Char)0x3a,  /* [2418] */
    (xdc_Char)0x20,  /* [2419] */
    (xdc_Char)0x52,  /* [2420] */
    (xdc_Char)0x65,  /* [2421] */
    (xdc_Char)0x71,  /* [2422] */
    (xdc_Char)0x75,  /* [2423] */
    (xdc_Char)0x65,  /* [2424] */
    (xdc_Char)0x73,  /* [2425] */
    (xdc_Char)0x74,  /* [2426] */
    (xdc_Char)0x65,  /* [2427] */
    (xdc_Char)0x64,  /* [2428] */
    (xdc_Char)0x20,  /* [2429] */
    (xdc_Char)0x68,  /* [2430] */
    (xdc_Char)0x65,  /* [2431] */
    (xdc_Char)0x61,  /* [2432] */
    (xdc_Char)0x70,  /* [2433] */
    (xdc_Char)0x20,  /* [2434] */
    (xdc_Char)0x73,  /* [2435] */
    (xdc_Char)0x69,  /* [2436] */
    (xdc_Char)0x7a,  /* [2437] */
    (xdc_Char)0x65,  /* [2438] */
    (xdc_Char)0x20,  /* [2439] */
    (xdc_Char)0x69,  /* [2440] */
    (xdc_Char)0x73,  /* [2441] */
    (xdc_Char)0x20,  /* [2442] */
    (xdc_Char)0x74,  /* [2443] */
    (xdc_Char)0x6f,  /* [2444] */
    (xdc_Char)0x6f,  /* [2445] */
    (xdc_Char)0x20,  /* [2446] */
    (xdc_Char)0x73,  /* [2447] */
    (xdc_Char)0x6d,  /* [2448] */
    (xdc_Char)0x61,  /* [2449] */
    (xdc_Char)0x6c,  /* [2450] */
    (xdc_Char)0x6c,  /* [2451] */
    (xdc_Char)0x0,  /* [2452] */
    (xdc_Char)0x41,  /* [2453] */
    (xdc_Char)0x5f,  /* [2454] */
    (xdc_Char)0x61,  /* [2455] */
    (xdc_Char)0x6c,  /* [2456] */
    (xdc_Char)0x69,  /* [2457] */
    (xdc_Char)0x67,  /* [2458] */
    (xdc_Char)0x6e,  /* [2459] */
    (xdc_Char)0x3a,  /* [2460] */
    (xdc_Char)0x20,  /* [2461] */
    (xdc_Char)0x52,  /* [2462] */
    (xdc_Char)0x65,  /* [2463] */
    (xdc_Char)0x71,  /* [2464] */
    (xdc_Char)0x75,  /* [2465] */
    (xdc_Char)0x65,  /* [2466] */
    (xdc_Char)0x73,  /* [2467] */
    (xdc_Char)0x74,  /* [2468] */
    (xdc_Char)0x65,  /* [2469] */
    (xdc_Char)0x64,  /* [2470] */
    (xdc_Char)0x20,  /* [2471] */
    (xdc_Char)0x61,  /* [2472] */
    (xdc_Char)0x6c,  /* [2473] */
    (xdc_Char)0x69,  /* [2474] */
    (xdc_Char)0x67,  /* [2475] */
    (xdc_Char)0x6e,  /* [2476] */
    (xdc_Char)0x20,  /* [2477] */
    (xdc_Char)0x69,  /* [2478] */
    (xdc_Char)0x73,  /* [2479] */
    (xdc_Char)0x20,  /* [2480] */
    (xdc_Char)0x6e,  /* [2481] */
    (xdc_Char)0x6f,  /* [2482] */
    (xdc_Char)0x74,  /* [2483] */
    (xdc_Char)0x20,  /* [2484] */
    (xdc_Char)0x61,  /* [2485] */
    (xdc_Char)0x20,  /* [2486] */
    (xdc_Char)0x70,  /* [2487] */
    (xdc_Char)0x6f,  /* [2488] */
    (xdc_Char)0x77,  /* [2489] */
    (xdc_Char)0x65,  /* [2490] */
    (xdc_Char)0x72,  /* [2491] */
    (xdc_Char)0x20,  /* [2492] */
    (xdc_Char)0x6f,  /* [2493] */
    (xdc_Char)0x66,  /* [2494] */
    (xdc_Char)0x20,  /* [2495] */
    (xdc_Char)0x32,  /* [2496] */
    (xdc_Char)0x0,  /* [2497] */
    (xdc_Char)0x49,  /* [2498] */
    (xdc_Char)0x6e,  /* [2499] */
    (xdc_Char)0x76,  /* [2500] */
    (xdc_Char)0x61,  /* [2501] */
    (xdc_Char)0x6c,  /* [2502] */
    (xdc_Char)0x69,  /* [2503] */
    (xdc_Char)0x64,  /* [2504] */
    (xdc_Char)0x20,  /* [2505] */
    (xdc_Char)0x62,  /* [2506] */
    (xdc_Char)0x6c,  /* [2507] */
    (xdc_Char)0x6f,  /* [2508] */
    (xdc_Char)0x63,  /* [2509] */
    (xdc_Char)0x6b,  /* [2510] */
    (xdc_Char)0x20,  /* [2511] */
    (xdc_Char)0x61,  /* [2512] */
    (xdc_Char)0x64,  /* [2513] */
    (xdc_Char)0x64,  /* [2514] */
    (xdc_Char)0x72,  /* [2515] */
    (xdc_Char)0x65,  /* [2516] */
    (xdc_Char)0x73,  /* [2517] */
    (xdc_Char)0x73,  /* [2518] */
    (xdc_Char)0x20,  /* [2519] */
    (xdc_Char)0x6f,  /* [2520] */
    (xdc_Char)0x6e,  /* [2521] */
    (xdc_Char)0x20,  /* [2522] */
    (xdc_Char)0x74,  /* [2523] */
    (xdc_Char)0x68,  /* [2524] */
    (xdc_Char)0x65,  /* [2525] */
    (xdc_Char)0x20,  /* [2526] */
    (xdc_Char)0x66,  /* [2527] */
    (xdc_Char)0x72,  /* [2528] */
    (xdc_Char)0x65,  /* [2529] */
    (xdc_Char)0x65,  /* [2530] */
    (xdc_Char)0x2e,  /* [2531] */
    (xdc_Char)0x20,  /* [2532] */
    (xdc_Char)0x46,  /* [2533] */
    (xdc_Char)0x61,  /* [2534] */
    (xdc_Char)0x69,  /* [2535] */
    (xdc_Char)0x6c,  /* [2536] */
    (xdc_Char)0x65,  /* [2537] */
    (xdc_Char)0x64,  /* [2538] */
    (xdc_Char)0x20,  /* [2539] */
    (xdc_Char)0x74,  /* [2540] */
    (xdc_Char)0x6f,  /* [2541] */
    (xdc_Char)0x20,  /* [2542] */
    (xdc_Char)0x66,  /* [2543] */
    (xdc_Char)0x72,  /* [2544] */
    (xdc_Char)0x65,  /* [2545] */
    (xdc_Char)0x65,  /* [2546] */
    (xdc_Char)0x20,  /* [2547] */
    (xdc_Char)0x62,  /* [2548] */
    (xdc_Char)0x6c,  /* [2549] */
    (xdc_Char)0x6f,  /* [2550] */
    (xdc_Char)0x63,  /* [2551] */
    (xdc_Char)0x6b,  /* [2552] */
    (xdc_Char)0x20,  /* [2553] */
    (xdc_Char)0x62,  /* [2554] */
    (xdc_Char)0x61,  /* [2555] */
    (xdc_Char)0x63,  /* [2556] */
    (xdc_Char)0x6b,  /* [2557] */
    (xdc_Char)0x20,  /* [2558] */
    (xdc_Char)0x74,  /* [2559] */
    (xdc_Char)0x6f,  /* [2560] */
    (xdc_Char)0x20,  /* [2561] */
    (xdc_Char)0x68,  /* [2562] */
    (xdc_Char)0x65,  /* [2563] */
    (xdc_Char)0x61,  /* [2564] */
    (xdc_Char)0x70,  /* [2565] */
    (xdc_Char)0x2e,  /* [2566] */
    (xdc_Char)0x0,  /* [2567] */
    (xdc_Char)0x41,  /* [2568] */
    (xdc_Char)0x5f,  /* [2569] */
    (xdc_Char)0x64,  /* [2570] */
    (xdc_Char)0x6f,  /* [2571] */
    (xdc_Char)0x75,  /* [2572] */
    (xdc_Char)0x62,  /* [2573] */
    (xdc_Char)0x6c,  /* [2574] */
    (xdc_Char)0x65,  /* [2575] */
    (xdc_Char)0x46,  /* [2576] */
    (xdc_Char)0x72,  /* [2577] */
    (xdc_Char)0x65,  /* [2578] */
    (xdc_Char)0x65,  /* [2579] */
    (xdc_Char)0x3a,  /* [2580] */
    (xdc_Char)0x20,  /* [2581] */
    (xdc_Char)0x42,  /* [2582] */
    (xdc_Char)0x75,  /* [2583] */
    (xdc_Char)0x66,  /* [2584] */
    (xdc_Char)0x66,  /* [2585] */
    (xdc_Char)0x65,  /* [2586] */
    (xdc_Char)0x72,  /* [2587] */
    (xdc_Char)0x20,  /* [2588] */
    (xdc_Char)0x61,  /* [2589] */
    (xdc_Char)0x6c,  /* [2590] */
    (xdc_Char)0x72,  /* [2591] */
    (xdc_Char)0x65,  /* [2592] */
    (xdc_Char)0x61,  /* [2593] */
    (xdc_Char)0x64,  /* [2594] */
    (xdc_Char)0x79,  /* [2595] */
    (xdc_Char)0x20,  /* [2596] */
    (xdc_Char)0x66,  /* [2597] */
    (xdc_Char)0x72,  /* [2598] */
    (xdc_Char)0x65,  /* [2599] */
    (xdc_Char)0x65,  /* [2600] */
    (xdc_Char)0x0,  /* [2601] */
    (xdc_Char)0x41,  /* [2602] */
    (xdc_Char)0x5f,  /* [2603] */
    (xdc_Char)0x62,  /* [2604] */
    (xdc_Char)0x75,  /* [2605] */
    (xdc_Char)0x66,  /* [2606] */
    (xdc_Char)0x4f,  /* [2607] */
    (xdc_Char)0x76,  /* [2608] */
    (xdc_Char)0x65,  /* [2609] */
    (xdc_Char)0x72,  /* [2610] */
    (xdc_Char)0x66,  /* [2611] */
    (xdc_Char)0x6c,  /* [2612] */
    (xdc_Char)0x6f,  /* [2613] */
    (xdc_Char)0x77,  /* [2614] */
    (xdc_Char)0x3a,  /* [2615] */
    (xdc_Char)0x20,  /* [2616] */
    (xdc_Char)0x42,  /* [2617] */
    (xdc_Char)0x75,  /* [2618] */
    (xdc_Char)0x66,  /* [2619] */
    (xdc_Char)0x66,  /* [2620] */
    (xdc_Char)0x65,  /* [2621] */
    (xdc_Char)0x72,  /* [2622] */
    (xdc_Char)0x20,  /* [2623] */
    (xdc_Char)0x6f,  /* [2624] */
    (xdc_Char)0x76,  /* [2625] */
    (xdc_Char)0x65,  /* [2626] */
    (xdc_Char)0x72,  /* [2627] */
    (xdc_Char)0x66,  /* [2628] */
    (xdc_Char)0x6c,  /* [2629] */
    (xdc_Char)0x6f,  /* [2630] */
    (xdc_Char)0x77,  /* [2631] */
    (xdc_Char)0x0,  /* [2632] */
    (xdc_Char)0x41,  /* [2633] */
    (xdc_Char)0x5f,  /* [2634] */
    (xdc_Char)0x6e,  /* [2635] */
    (xdc_Char)0x6f,  /* [2636] */
    (xdc_Char)0x74,  /* [2637] */
    (xdc_Char)0x45,  /* [2638] */
    (xdc_Char)0x6d,  /* [2639] */
    (xdc_Char)0x70,  /* [2640] */
    (xdc_Char)0x74,  /* [2641] */
    (xdc_Char)0x79,  /* [2642] */
    (xdc_Char)0x3a,  /* [2643] */
    (xdc_Char)0x20,  /* [2644] */
    (xdc_Char)0x48,  /* [2645] */
    (xdc_Char)0x65,  /* [2646] */
    (xdc_Char)0x61,  /* [2647] */
    (xdc_Char)0x70,  /* [2648] */
    (xdc_Char)0x20,  /* [2649] */
    (xdc_Char)0x6e,  /* [2650] */
    (xdc_Char)0x6f,  /* [2651] */
    (xdc_Char)0x74,  /* [2652] */
    (xdc_Char)0x20,  /* [2653] */
    (xdc_Char)0x65,  /* [2654] */
    (xdc_Char)0x6d,  /* [2655] */
    (xdc_Char)0x70,  /* [2656] */
    (xdc_Char)0x74,  /* [2657] */
    (xdc_Char)0x79,  /* [2658] */
    (xdc_Char)0x0,  /* [2659] */
    (xdc_Char)0x41,  /* [2660] */
    (xdc_Char)0x5f,  /* [2661] */
    (xdc_Char)0x6e,  /* [2662] */
    (xdc_Char)0x75,  /* [2663] */
    (xdc_Char)0x6c,  /* [2664] */
    (xdc_Char)0x6c,  /* [2665] */
    (xdc_Char)0x4f,  /* [2666] */
    (xdc_Char)0x62,  /* [2667] */
    (xdc_Char)0x6a,  /* [2668] */
    (xdc_Char)0x65,  /* [2669] */
    (xdc_Char)0x63,  /* [2670] */
    (xdc_Char)0x74,  /* [2671] */
    (xdc_Char)0x3a,  /* [2672] */
    (xdc_Char)0x20,  /* [2673] */
    (xdc_Char)0x48,  /* [2674] */
    (xdc_Char)0x65,  /* [2675] */
    (xdc_Char)0x61,  /* [2676] */
    (xdc_Char)0x70,  /* [2677] */
    (xdc_Char)0x54,  /* [2678] */
    (xdc_Char)0x72,  /* [2679] */
    (xdc_Char)0x61,  /* [2680] */
    (xdc_Char)0x63,  /* [2681] */
    (xdc_Char)0x6b,  /* [2682] */
    (xdc_Char)0x5f,  /* [2683] */
    (xdc_Char)0x70,  /* [2684] */
    (xdc_Char)0x72,  /* [2685] */
    (xdc_Char)0x69,  /* [2686] */
    (xdc_Char)0x6e,  /* [2687] */
    (xdc_Char)0x74,  /* [2688] */
    (xdc_Char)0x48,  /* [2689] */
    (xdc_Char)0x65,  /* [2690] */
    (xdc_Char)0x61,  /* [2691] */
    (xdc_Char)0x70,  /* [2692] */
    (xdc_Char)0x20,  /* [2693] */
    (xdc_Char)0x63,  /* [2694] */
    (xdc_Char)0x61,  /* [2695] */
    (xdc_Char)0x6c,  /* [2696] */
    (xdc_Char)0x6c,  /* [2697] */
    (xdc_Char)0x65,  /* [2698] */
    (xdc_Char)0x64,  /* [2699] */
    (xdc_Char)0x20,  /* [2700] */
    (xdc_Char)0x77,  /* [2701] */
    (xdc_Char)0x69,  /* [2702] */
    (xdc_Char)0x74,  /* [2703] */
    (xdc_Char)0x68,  /* [2704] */
    (xdc_Char)0x20,  /* [2705] */
    (xdc_Char)0x6e,  /* [2706] */
    (xdc_Char)0x75,  /* [2707] */
    (xdc_Char)0x6c,  /* [2708] */
    (xdc_Char)0x6c,  /* [2709] */
    (xdc_Char)0x20,  /* [2710] */
    (xdc_Char)0x6f,  /* [2711] */
    (xdc_Char)0x62,  /* [2712] */
    (xdc_Char)0x6a,  /* [2713] */
    (xdc_Char)0x0,  /* [2714] */
    (xdc_Char)0x41,  /* [2715] */
    (xdc_Char)0x5f,  /* [2716] */
    (xdc_Char)0x6d,  /* [2717] */
    (xdc_Char)0x75,  /* [2718] */
    (xdc_Char)0x73,  /* [2719] */
    (xdc_Char)0x74,  /* [2720] */
    (xdc_Char)0x55,  /* [2721] */
    (xdc_Char)0x73,  /* [2722] */
    (xdc_Char)0x65,  /* [2723] */
    (xdc_Char)0x45,  /* [2724] */
    (xdc_Char)0x6e,  /* [2725] */
    (xdc_Char)0x68,  /* [2726] */
    (xdc_Char)0x61,  /* [2727] */
    (xdc_Char)0x6e,  /* [2728] */
    (xdc_Char)0x63,  /* [2729] */
    (xdc_Char)0x65,  /* [2730] */
    (xdc_Char)0x64,  /* [2731] */
    (xdc_Char)0x43,  /* [2732] */
    (xdc_Char)0x6c,  /* [2733] */
    (xdc_Char)0x6f,  /* [2734] */
    (xdc_Char)0x63,  /* [2735] */
    (xdc_Char)0x6b,  /* [2736] */
    (xdc_Char)0x4d,  /* [2737] */
    (xdc_Char)0x6f,  /* [2738] */
    (xdc_Char)0x64,  /* [2739] */
    (xdc_Char)0x65,  /* [2740] */
    (xdc_Char)0x3a,  /* [2741] */
    (xdc_Char)0x20,  /* [2742] */
    (xdc_Char)0x54,  /* [2743] */
    (xdc_Char)0x68,  /* [2744] */
    (xdc_Char)0x69,  /* [2745] */
    (xdc_Char)0x73,  /* [2746] */
    (xdc_Char)0x20,  /* [2747] */
    (xdc_Char)0x64,  /* [2748] */
    (xdc_Char)0x65,  /* [2749] */
    (xdc_Char)0x76,  /* [2750] */
    (xdc_Char)0x69,  /* [2751] */
    (xdc_Char)0x63,  /* [2752] */
    (xdc_Char)0x65,  /* [2753] */
    (xdc_Char)0x20,  /* [2754] */
    (xdc_Char)0x72,  /* [2755] */
    (xdc_Char)0x65,  /* [2756] */
    (xdc_Char)0x71,  /* [2757] */
    (xdc_Char)0x75,  /* [2758] */
    (xdc_Char)0x69,  /* [2759] */
    (xdc_Char)0x72,  /* [2760] */
    (xdc_Char)0x65,  /* [2761] */
    (xdc_Char)0x73,  /* [2762] */
    (xdc_Char)0x20,  /* [2763] */
    (xdc_Char)0x74,  /* [2764] */
    (xdc_Char)0x68,  /* [2765] */
    (xdc_Char)0x65,  /* [2766] */
    (xdc_Char)0x20,  /* [2767] */
    (xdc_Char)0x45,  /* [2768] */
    (xdc_Char)0x6e,  /* [2769] */
    (xdc_Char)0x68,  /* [2770] */
    (xdc_Char)0x61,  /* [2771] */
    (xdc_Char)0x6e,  /* [2772] */
    (xdc_Char)0x63,  /* [2773] */
    (xdc_Char)0x65,  /* [2774] */
    (xdc_Char)0x64,  /* [2775] */
    (xdc_Char)0x20,  /* [2776] */
    (xdc_Char)0x43,  /* [2777] */
    (xdc_Char)0x6c,  /* [2778] */
    (xdc_Char)0x6f,  /* [2779] */
    (xdc_Char)0x63,  /* [2780] */
    (xdc_Char)0x6b,  /* [2781] */
    (xdc_Char)0x20,  /* [2782] */
    (xdc_Char)0x4d,  /* [2783] */
    (xdc_Char)0x6f,  /* [2784] */
    (xdc_Char)0x64,  /* [2785] */
    (xdc_Char)0x65,  /* [2786] */
    (xdc_Char)0x2e,  /* [2787] */
    (xdc_Char)0x0,  /* [2788] */
    (xdc_Char)0x41,  /* [2789] */
    (xdc_Char)0x5f,  /* [2790] */
    (xdc_Char)0x6d,  /* [2791] */
    (xdc_Char)0x75,  /* [2792] */
    (xdc_Char)0x73,  /* [2793] */
    (xdc_Char)0x74,  /* [2794] */
    (xdc_Char)0x4e,  /* [2795] */
    (xdc_Char)0x6f,  /* [2796] */
    (xdc_Char)0x74,  /* [2797] */
    (xdc_Char)0x55,  /* [2798] */
    (xdc_Char)0x73,  /* [2799] */
    (xdc_Char)0x65,  /* [2800] */
    (xdc_Char)0x45,  /* [2801] */
    (xdc_Char)0x6e,  /* [2802] */
    (xdc_Char)0x68,  /* [2803] */
    (xdc_Char)0x61,  /* [2804] */
    (xdc_Char)0x6e,  /* [2805] */
    (xdc_Char)0x63,  /* [2806] */
    (xdc_Char)0x65,  /* [2807] */
    (xdc_Char)0x64,  /* [2808] */
    (xdc_Char)0x43,  /* [2809] */
    (xdc_Char)0x6c,  /* [2810] */
    (xdc_Char)0x6f,  /* [2811] */
    (xdc_Char)0x63,  /* [2812] */
    (xdc_Char)0x6b,  /* [2813] */
    (xdc_Char)0x4d,  /* [2814] */
    (xdc_Char)0x6f,  /* [2815] */
    (xdc_Char)0x64,  /* [2816] */
    (xdc_Char)0x65,  /* [2817] */
    (xdc_Char)0x3a,  /* [2818] */
    (xdc_Char)0x20,  /* [2819] */
    (xdc_Char)0x54,  /* [2820] */
    (xdc_Char)0x68,  /* [2821] */
    (xdc_Char)0x69,  /* [2822] */
    (xdc_Char)0x73,  /* [2823] */
    (xdc_Char)0x20,  /* [2824] */
    (xdc_Char)0x64,  /* [2825] */
    (xdc_Char)0x65,  /* [2826] */
    (xdc_Char)0x76,  /* [2827] */
    (xdc_Char)0x69,  /* [2828] */
    (xdc_Char)0x63,  /* [2829] */
    (xdc_Char)0x65,  /* [2830] */
    (xdc_Char)0x20,  /* [2831] */
    (xdc_Char)0x64,  /* [2832] */
    (xdc_Char)0x6f,  /* [2833] */
    (xdc_Char)0x65,  /* [2834] */
    (xdc_Char)0x73,  /* [2835] */
    (xdc_Char)0x20,  /* [2836] */
    (xdc_Char)0x6e,  /* [2837] */
    (xdc_Char)0x6f,  /* [2838] */
    (xdc_Char)0x74,  /* [2839] */
    (xdc_Char)0x20,  /* [2840] */
    (xdc_Char)0x73,  /* [2841] */
    (xdc_Char)0x75,  /* [2842] */
    (xdc_Char)0x70,  /* [2843] */
    (xdc_Char)0x70,  /* [2844] */
    (xdc_Char)0x6f,  /* [2845] */
    (xdc_Char)0x72,  /* [2846] */
    (xdc_Char)0x74,  /* [2847] */
    (xdc_Char)0x20,  /* [2848] */
    (xdc_Char)0x74,  /* [2849] */
    (xdc_Char)0x68,  /* [2850] */
    (xdc_Char)0x65,  /* [2851] */
    (xdc_Char)0x20,  /* [2852] */
    (xdc_Char)0x45,  /* [2853] */
    (xdc_Char)0x6e,  /* [2854] */
    (xdc_Char)0x68,  /* [2855] */
    (xdc_Char)0x61,  /* [2856] */
    (xdc_Char)0x6e,  /* [2857] */
    (xdc_Char)0x63,  /* [2858] */
    (xdc_Char)0x65,  /* [2859] */
    (xdc_Char)0x64,  /* [2860] */
    (xdc_Char)0x20,  /* [2861] */
    (xdc_Char)0x43,  /* [2862] */
    (xdc_Char)0x6c,  /* [2863] */
    (xdc_Char)0x6f,  /* [2864] */
    (xdc_Char)0x63,  /* [2865] */
    (xdc_Char)0x6b,  /* [2866] */
    (xdc_Char)0x20,  /* [2867] */
    (xdc_Char)0x4d,  /* [2868] */
    (xdc_Char)0x6f,  /* [2869] */
    (xdc_Char)0x64,  /* [2870] */
    (xdc_Char)0x65,  /* [2871] */
    (xdc_Char)0x2e,  /* [2872] */
    (xdc_Char)0x0,  /* [2873] */
    (xdc_Char)0x41,  /* [2874] */
    (xdc_Char)0x5f,  /* [2875] */
    (xdc_Char)0x7a,  /* [2876] */
    (xdc_Char)0x65,  /* [2877] */
    (xdc_Char)0x72,  /* [2878] */
    (xdc_Char)0x6f,  /* [2879] */
    (xdc_Char)0x54,  /* [2880] */
    (xdc_Char)0x69,  /* [2881] */
    (xdc_Char)0x6d,  /* [2882] */
    (xdc_Char)0x65,  /* [2883] */
    (xdc_Char)0x6f,  /* [2884] */
    (xdc_Char)0x75,  /* [2885] */
    (xdc_Char)0x74,  /* [2886] */
    (xdc_Char)0x3a,  /* [2887] */
    (xdc_Char)0x20,  /* [2888] */
    (xdc_Char)0x54,  /* [2889] */
    (xdc_Char)0x69,  /* [2890] */
    (xdc_Char)0x6d,  /* [2891] */
    (xdc_Char)0x65,  /* [2892] */
    (xdc_Char)0x6f,  /* [2893] */
    (xdc_Char)0x75,  /* [2894] */
    (xdc_Char)0x74,  /* [2895] */
    (xdc_Char)0x20,  /* [2896] */
    (xdc_Char)0x76,  /* [2897] */
    (xdc_Char)0x61,  /* [2898] */
    (xdc_Char)0x6c,  /* [2899] */
    (xdc_Char)0x75,  /* [2900] */
    (xdc_Char)0x65,  /* [2901] */
    (xdc_Char)0x20,  /* [2902] */
    (xdc_Char)0x61,  /* [2903] */
    (xdc_Char)0x6e,  /* [2904] */
    (xdc_Char)0x6e,  /* [2905] */
    (xdc_Char)0x6f,  /* [2906] */
    (xdc_Char)0x74,  /* [2907] */
    (xdc_Char)0x20,  /* [2908] */
    (xdc_Char)0x62,  /* [2909] */
    (xdc_Char)0x65,  /* [2910] */
    (xdc_Char)0x20,  /* [2911] */
    (xdc_Char)0x7a,  /* [2912] */
    (xdc_Char)0x65,  /* [2913] */
    (xdc_Char)0x72,  /* [2914] */
    (xdc_Char)0x6f,  /* [2915] */
    (xdc_Char)0x0,  /* [2916] */
    (xdc_Char)0x41,  /* [2917] */
    (xdc_Char)0x5f,  /* [2918] */
    (xdc_Char)0x69,  /* [2919] */
    (xdc_Char)0x6e,  /* [2920] */
    (xdc_Char)0x76,  /* [2921] */
    (xdc_Char)0x61,  /* [2922] */
    (xdc_Char)0x6c,  /* [2923] */
    (xdc_Char)0x69,  /* [2924] */
    (xdc_Char)0x64,  /* [2925] */
    (xdc_Char)0x4b,  /* [2926] */
    (xdc_Char)0x65,  /* [2927] */
    (xdc_Char)0x79,  /* [2928] */
    (xdc_Char)0x3a,  /* [2929] */
    (xdc_Char)0x20,  /* [2930] */
    (xdc_Char)0x74,  /* [2931] */
    (xdc_Char)0x68,  /* [2932] */
    (xdc_Char)0x65,  /* [2933] */
    (xdc_Char)0x20,  /* [2934] */
    (xdc_Char)0x6b,  /* [2935] */
    (xdc_Char)0x65,  /* [2936] */
    (xdc_Char)0x79,  /* [2937] */
    (xdc_Char)0x20,  /* [2938] */
    (xdc_Char)0x6d,  /* [2939] */
    (xdc_Char)0x75,  /* [2940] */
    (xdc_Char)0x73,  /* [2941] */
    (xdc_Char)0x74,  /* [2942] */
    (xdc_Char)0x20,  /* [2943] */
    (xdc_Char)0x62,  /* [2944] */
    (xdc_Char)0x65,  /* [2945] */
    (xdc_Char)0x20,  /* [2946] */
    (xdc_Char)0x73,  /* [2947] */
    (xdc_Char)0x65,  /* [2948] */
    (xdc_Char)0x74,  /* [2949] */
    (xdc_Char)0x20,  /* [2950] */
    (xdc_Char)0x74,  /* [2951] */
    (xdc_Char)0x6f,  /* [2952] */
    (xdc_Char)0x20,  /* [2953] */
    (xdc_Char)0x61,  /* [2954] */
    (xdc_Char)0x20,  /* [2955] */
    (xdc_Char)0x6e,  /* [2956] */
    (xdc_Char)0x6f,  /* [2957] */
    (xdc_Char)0x6e,  /* [2958] */
    (xdc_Char)0x2d,  /* [2959] */
    (xdc_Char)0x64,  /* [2960] */
    (xdc_Char)0x65,  /* [2961] */
    (xdc_Char)0x66,  /* [2962] */
    (xdc_Char)0x61,  /* [2963] */
    (xdc_Char)0x75,  /* [2964] */
    (xdc_Char)0x6c,  /* [2965] */
    (xdc_Char)0x74,  /* [2966] */
    (xdc_Char)0x20,  /* [2967] */
    (xdc_Char)0x76,  /* [2968] */
    (xdc_Char)0x61,  /* [2969] */
    (xdc_Char)0x6c,  /* [2970] */
    (xdc_Char)0x75,  /* [2971] */
    (xdc_Char)0x65,  /* [2972] */
    (xdc_Char)0x0,  /* [2973] */
    (xdc_Char)0x41,  /* [2974] */
    (xdc_Char)0x5f,  /* [2975] */
    (xdc_Char)0x62,  /* [2976] */
    (xdc_Char)0x61,  /* [2977] */
    (xdc_Char)0x64,  /* [2978] */
    (xdc_Char)0x43,  /* [2979] */
    (xdc_Char)0x6f,  /* [2980] */
    (xdc_Char)0x6e,  /* [2981] */
    (xdc_Char)0x74,  /* [2982] */
    (xdc_Char)0x65,  /* [2983] */
    (xdc_Char)0x78,  /* [2984] */
    (xdc_Char)0x74,  /* [2985] */
    (xdc_Char)0x3a,  /* [2986] */
    (xdc_Char)0x20,  /* [2987] */
    (xdc_Char)0x62,  /* [2988] */
    (xdc_Char)0x61,  /* [2989] */
    (xdc_Char)0x64,  /* [2990] */
    (xdc_Char)0x20,  /* [2991] */
    (xdc_Char)0x63,  /* [2992] */
    (xdc_Char)0x61,  /* [2993] */
    (xdc_Char)0x6c,  /* [2994] */
    (xdc_Char)0x6c,  /* [2995] */
    (xdc_Char)0x69,  /* [2996] */
    (xdc_Char)0x6e,  /* [2997] */
    (xdc_Char)0x67,  /* [2998] */
    (xdc_Char)0x20,  /* [2999] */
    (xdc_Char)0x63,  /* [3000] */
    (xdc_Char)0x6f,  /* [3001] */
    (xdc_Char)0x6e,  /* [3002] */
    (xdc_Char)0x74,  /* [3003] */
    (xdc_Char)0x65,  /* [3004] */
    (xdc_Char)0x78,  /* [3005] */
    (xdc_Char)0x74,  /* [3006] */
    (xdc_Char)0x2e,  /* [3007] */
    (xdc_Char)0x20,  /* [3008] */
    (xdc_Char)0x4d,  /* [3009] */
    (xdc_Char)0x61,  /* [3010] */
    (xdc_Char)0x79,  /* [3011] */
    (xdc_Char)0x20,  /* [3012] */
    (xdc_Char)0x6e,  /* [3013] */
    (xdc_Char)0x6f,  /* [3014] */
    (xdc_Char)0x74,  /* [3015] */
    (xdc_Char)0x20,  /* [3016] */
    (xdc_Char)0x62,  /* [3017] */
    (xdc_Char)0x65,  /* [3018] */
    (xdc_Char)0x20,  /* [3019] */
    (xdc_Char)0x65,  /* [3020] */
    (xdc_Char)0x6e,  /* [3021] */
    (xdc_Char)0x74,  /* [3022] */
    (xdc_Char)0x65,  /* [3023] */
    (xdc_Char)0x72,  /* [3024] */
    (xdc_Char)0x65,  /* [3025] */
    (xdc_Char)0x64,  /* [3026] */
    (xdc_Char)0x20,  /* [3027] */
    (xdc_Char)0x66,  /* [3028] */
    (xdc_Char)0x72,  /* [3029] */
    (xdc_Char)0x6f,  /* [3030] */
    (xdc_Char)0x6d,  /* [3031] */
    (xdc_Char)0x20,  /* [3032] */
    (xdc_Char)0x61,  /* [3033] */
    (xdc_Char)0x20,  /* [3034] */
    (xdc_Char)0x68,  /* [3035] */
    (xdc_Char)0x61,  /* [3036] */
    (xdc_Char)0x72,  /* [3037] */
    (xdc_Char)0x64,  /* [3038] */
    (xdc_Char)0x77,  /* [3039] */
    (xdc_Char)0x61,  /* [3040] */
    (xdc_Char)0x72,  /* [3041] */
    (xdc_Char)0x65,  /* [3042] */
    (xdc_Char)0x20,  /* [3043] */
    (xdc_Char)0x69,  /* [3044] */
    (xdc_Char)0x6e,  /* [3045] */
    (xdc_Char)0x74,  /* [3046] */
    (xdc_Char)0x65,  /* [3047] */
    (xdc_Char)0x72,  /* [3048] */
    (xdc_Char)0x72,  /* [3049] */
    (xdc_Char)0x75,  /* [3050] */
    (xdc_Char)0x70,  /* [3051] */
    (xdc_Char)0x74,  /* [3052] */
    (xdc_Char)0x20,  /* [3053] */
    (xdc_Char)0x74,  /* [3054] */
    (xdc_Char)0x68,  /* [3055] */
    (xdc_Char)0x72,  /* [3056] */
    (xdc_Char)0x65,  /* [3057] */
    (xdc_Char)0x61,  /* [3058] */
    (xdc_Char)0x64,  /* [3059] */
    (xdc_Char)0x2e,  /* [3060] */
    (xdc_Char)0x0,  /* [3061] */
    (xdc_Char)0x41,  /* [3062] */
    (xdc_Char)0x5f,  /* [3063] */
    (xdc_Char)0x62,  /* [3064] */
    (xdc_Char)0x61,  /* [3065] */
    (xdc_Char)0x64,  /* [3066] */
    (xdc_Char)0x43,  /* [3067] */
    (xdc_Char)0x6f,  /* [3068] */
    (xdc_Char)0x6e,  /* [3069] */
    (xdc_Char)0x74,  /* [3070] */
    (xdc_Char)0x65,  /* [3071] */
    (xdc_Char)0x78,  /* [3072] */
    (xdc_Char)0x74,  /* [3073] */
    (xdc_Char)0x3a,  /* [3074] */
    (xdc_Char)0x20,  /* [3075] */
    (xdc_Char)0x62,  /* [3076] */
    (xdc_Char)0x61,  /* [3077] */
    (xdc_Char)0x64,  /* [3078] */
    (xdc_Char)0x20,  /* [3079] */
    (xdc_Char)0x63,  /* [3080] */
    (xdc_Char)0x61,  /* [3081] */
    (xdc_Char)0x6c,  /* [3082] */
    (xdc_Char)0x6c,  /* [3083] */
    (xdc_Char)0x69,  /* [3084] */
    (xdc_Char)0x6e,  /* [3085] */
    (xdc_Char)0x67,  /* [3086] */
    (xdc_Char)0x20,  /* [3087] */
    (xdc_Char)0x63,  /* [3088] */
    (xdc_Char)0x6f,  /* [3089] */
    (xdc_Char)0x6e,  /* [3090] */
    (xdc_Char)0x74,  /* [3091] */
    (xdc_Char)0x65,  /* [3092] */
    (xdc_Char)0x78,  /* [3093] */
    (xdc_Char)0x74,  /* [3094] */
    (xdc_Char)0x2e,  /* [3095] */
    (xdc_Char)0x20,  /* [3096] */
    (xdc_Char)0x4d,  /* [3097] */
    (xdc_Char)0x61,  /* [3098] */
    (xdc_Char)0x79,  /* [3099] */
    (xdc_Char)0x20,  /* [3100] */
    (xdc_Char)0x6e,  /* [3101] */
    (xdc_Char)0x6f,  /* [3102] */
    (xdc_Char)0x74,  /* [3103] */
    (xdc_Char)0x20,  /* [3104] */
    (xdc_Char)0x62,  /* [3105] */
    (xdc_Char)0x65,  /* [3106] */
    (xdc_Char)0x20,  /* [3107] */
    (xdc_Char)0x65,  /* [3108] */
    (xdc_Char)0x6e,  /* [3109] */
    (xdc_Char)0x74,  /* [3110] */
    (xdc_Char)0x65,  /* [3111] */
    (xdc_Char)0x72,  /* [3112] */
    (xdc_Char)0x65,  /* [3113] */
    (xdc_Char)0x64,  /* [3114] */
    (xdc_Char)0x20,  /* [3115] */
    (xdc_Char)0x66,  /* [3116] */
    (xdc_Char)0x72,  /* [3117] */
    (xdc_Char)0x6f,  /* [3118] */
    (xdc_Char)0x6d,  /* [3119] */
    (xdc_Char)0x20,  /* [3120] */
    (xdc_Char)0x61,  /* [3121] */
    (xdc_Char)0x20,  /* [3122] */
    (xdc_Char)0x73,  /* [3123] */
    (xdc_Char)0x6f,  /* [3124] */
    (xdc_Char)0x66,  /* [3125] */
    (xdc_Char)0x74,  /* [3126] */
    (xdc_Char)0x77,  /* [3127] */
    (xdc_Char)0x61,  /* [3128] */
    (xdc_Char)0x72,  /* [3129] */
    (xdc_Char)0x65,  /* [3130] */
    (xdc_Char)0x20,  /* [3131] */
    (xdc_Char)0x6f,  /* [3132] */
    (xdc_Char)0x72,  /* [3133] */
    (xdc_Char)0x20,  /* [3134] */
    (xdc_Char)0x68,  /* [3135] */
    (xdc_Char)0x61,  /* [3136] */
    (xdc_Char)0x72,  /* [3137] */
    (xdc_Char)0x64,  /* [3138] */
    (xdc_Char)0x77,  /* [3139] */
    (xdc_Char)0x61,  /* [3140] */
    (xdc_Char)0x72,  /* [3141] */
    (xdc_Char)0x65,  /* [3142] */
    (xdc_Char)0x20,  /* [3143] */
    (xdc_Char)0x69,  /* [3144] */
    (xdc_Char)0x6e,  /* [3145] */
    (xdc_Char)0x74,  /* [3146] */
    (xdc_Char)0x65,  /* [3147] */
    (xdc_Char)0x72,  /* [3148] */
    (xdc_Char)0x72,  /* [3149] */
    (xdc_Char)0x75,  /* [3150] */
    (xdc_Char)0x70,  /* [3151] */
    (xdc_Char)0x74,  /* [3152] */
    (xdc_Char)0x20,  /* [3153] */
    (xdc_Char)0x74,  /* [3154] */
    (xdc_Char)0x68,  /* [3155] */
    (xdc_Char)0x72,  /* [3156] */
    (xdc_Char)0x65,  /* [3157] */
    (xdc_Char)0x61,  /* [3158] */
    (xdc_Char)0x64,  /* [3159] */
    (xdc_Char)0x2e,  /* [3160] */
    (xdc_Char)0x0,  /* [3161] */
    (xdc_Char)0x41,  /* [3162] */
    (xdc_Char)0x5f,  /* [3163] */
    (xdc_Char)0x62,  /* [3164] */
    (xdc_Char)0x61,  /* [3165] */
    (xdc_Char)0x64,  /* [3166] */
    (xdc_Char)0x43,  /* [3167] */
    (xdc_Char)0x6f,  /* [3168] */
    (xdc_Char)0x6e,  /* [3169] */
    (xdc_Char)0x74,  /* [3170] */
    (xdc_Char)0x65,  /* [3171] */
    (xdc_Char)0x78,  /* [3172] */
    (xdc_Char)0x74,  /* [3173] */
    (xdc_Char)0x3a,  /* [3174] */
    (xdc_Char)0x20,  /* [3175] */
    (xdc_Char)0x62,  /* [3176] */
    (xdc_Char)0x61,  /* [3177] */
    (xdc_Char)0x64,  /* [3178] */
    (xdc_Char)0x20,  /* [3179] */
    (xdc_Char)0x63,  /* [3180] */
    (xdc_Char)0x61,  /* [3181] */
    (xdc_Char)0x6c,  /* [3182] */
    (xdc_Char)0x6c,  /* [3183] */
    (xdc_Char)0x69,  /* [3184] */
    (xdc_Char)0x6e,  /* [3185] */
    (xdc_Char)0x67,  /* [3186] */
    (xdc_Char)0x20,  /* [3187] */
    (xdc_Char)0x63,  /* [3188] */
    (xdc_Char)0x6f,  /* [3189] */
    (xdc_Char)0x6e,  /* [3190] */
    (xdc_Char)0x74,  /* [3191] */
    (xdc_Char)0x65,  /* [3192] */
    (xdc_Char)0x78,  /* [3193] */
    (xdc_Char)0x74,  /* [3194] */
    (xdc_Char)0x2e,  /* [3195] */
    (xdc_Char)0x20,  /* [3196] */
    (xdc_Char)0x53,  /* [3197] */
    (xdc_Char)0x65,  /* [3198] */
    (xdc_Char)0x65,  /* [3199] */
    (xdc_Char)0x20,  /* [3200] */
    (xdc_Char)0x47,  /* [3201] */
    (xdc_Char)0x61,  /* [3202] */
    (xdc_Char)0x74,  /* [3203] */
    (xdc_Char)0x65,  /* [3204] */
    (xdc_Char)0x4d,  /* [3205] */
    (xdc_Char)0x75,  /* [3206] */
    (xdc_Char)0x74,  /* [3207] */
    (xdc_Char)0x65,  /* [3208] */
    (xdc_Char)0x78,  /* [3209] */
    (xdc_Char)0x50,  /* [3210] */
    (xdc_Char)0x72,  /* [3211] */
    (xdc_Char)0x69,  /* [3212] */
    (xdc_Char)0x20,  /* [3213] */
    (xdc_Char)0x41,  /* [3214] */
    (xdc_Char)0x50,  /* [3215] */
    (xdc_Char)0x49,  /* [3216] */
    (xdc_Char)0x20,  /* [3217] */
    (xdc_Char)0x64,  /* [3218] */
    (xdc_Char)0x6f,  /* [3219] */
    (xdc_Char)0x63,  /* [3220] */
    (xdc_Char)0x20,  /* [3221] */
    (xdc_Char)0x66,  /* [3222] */
    (xdc_Char)0x6f,  /* [3223] */
    (xdc_Char)0x72,  /* [3224] */
    (xdc_Char)0x20,  /* [3225] */
    (xdc_Char)0x64,  /* [3226] */
    (xdc_Char)0x65,  /* [3227] */
    (xdc_Char)0x74,  /* [3228] */
    (xdc_Char)0x61,  /* [3229] */
    (xdc_Char)0x69,  /* [3230] */
    (xdc_Char)0x6c,  /* [3231] */
    (xdc_Char)0x73,  /* [3232] */
    (xdc_Char)0x2e,  /* [3233] */
    (xdc_Char)0x0,  /* [3234] */
    (xdc_Char)0x41,  /* [3235] */
    (xdc_Char)0x5f,  /* [3236] */
    (xdc_Char)0x65,  /* [3237] */
    (xdc_Char)0x6e,  /* [3238] */
    (xdc_Char)0x74,  /* [3239] */
    (xdc_Char)0x65,  /* [3240] */
    (xdc_Char)0x72,  /* [3241] */
    (xdc_Char)0x54,  /* [3242] */
    (xdc_Char)0x61,  /* [3243] */
    (xdc_Char)0x73,  /* [3244] */
    (xdc_Char)0x6b,  /* [3245] */
    (xdc_Char)0x44,  /* [3246] */
    (xdc_Char)0x69,  /* [3247] */
    (xdc_Char)0x73,  /* [3248] */
    (xdc_Char)0x61,  /* [3249] */
    (xdc_Char)0x62,  /* [3250] */
    (xdc_Char)0x6c,  /* [3251] */
    (xdc_Char)0x65,  /* [3252] */
    (xdc_Char)0x64,  /* [3253] */
    (xdc_Char)0x3a,  /* [3254] */
    (xdc_Char)0x20,  /* [3255] */
    (xdc_Char)0x43,  /* [3256] */
    (xdc_Char)0x61,  /* [3257] */
    (xdc_Char)0x6e,  /* [3258] */
    (xdc_Char)0x6e,  /* [3259] */
    (xdc_Char)0x6f,  /* [3260] */
    (xdc_Char)0x74,  /* [3261] */
    (xdc_Char)0x20,  /* [3262] */
    (xdc_Char)0x63,  /* [3263] */
    (xdc_Char)0x61,  /* [3264] */
    (xdc_Char)0x6c,  /* [3265] */
    (xdc_Char)0x6c,  /* [3266] */
    (xdc_Char)0x20,  /* [3267] */
    (xdc_Char)0x47,  /* [3268] */
    (xdc_Char)0x61,  /* [3269] */
    (xdc_Char)0x74,  /* [3270] */
    (xdc_Char)0x65,  /* [3271] */
    (xdc_Char)0x4d,  /* [3272] */
    (xdc_Char)0x75,  /* [3273] */
    (xdc_Char)0x74,  /* [3274] */
    (xdc_Char)0x65,  /* [3275] */
    (xdc_Char)0x78,  /* [3276] */
    (xdc_Char)0x50,  /* [3277] */
    (xdc_Char)0x72,  /* [3278] */
    (xdc_Char)0x69,  /* [3279] */
    (xdc_Char)0x5f,  /* [3280] */
    (xdc_Char)0x65,  /* [3281] */
    (xdc_Char)0x6e,  /* [3282] */
    (xdc_Char)0x74,  /* [3283] */
    (xdc_Char)0x65,  /* [3284] */
    (xdc_Char)0x72,  /* [3285] */
    (xdc_Char)0x28,  /* [3286] */
    (xdc_Char)0x29,  /* [3287] */
    (xdc_Char)0x20,  /* [3288] */
    (xdc_Char)0x77,  /* [3289] */
    (xdc_Char)0x68,  /* [3290] */
    (xdc_Char)0x69,  /* [3291] */
    (xdc_Char)0x6c,  /* [3292] */
    (xdc_Char)0x65,  /* [3293] */
    (xdc_Char)0x20,  /* [3294] */
    (xdc_Char)0x74,  /* [3295] */
    (xdc_Char)0x68,  /* [3296] */
    (xdc_Char)0x65,  /* [3297] */
    (xdc_Char)0x20,  /* [3298] */
    (xdc_Char)0x54,  /* [3299] */
    (xdc_Char)0x61,  /* [3300] */
    (xdc_Char)0x73,  /* [3301] */
    (xdc_Char)0x6b,  /* [3302] */
    (xdc_Char)0x20,  /* [3303] */
    (xdc_Char)0x6f,  /* [3304] */
    (xdc_Char)0x72,  /* [3305] */
    (xdc_Char)0x20,  /* [3306] */
    (xdc_Char)0x53,  /* [3307] */
    (xdc_Char)0x77,  /* [3308] */
    (xdc_Char)0x69,  /* [3309] */
    (xdc_Char)0x20,  /* [3310] */
    (xdc_Char)0x73,  /* [3311] */
    (xdc_Char)0x63,  /* [3312] */
    (xdc_Char)0x68,  /* [3313] */
    (xdc_Char)0x65,  /* [3314] */
    (xdc_Char)0x64,  /* [3315] */
    (xdc_Char)0x75,  /* [3316] */
    (xdc_Char)0x6c,  /* [3317] */
    (xdc_Char)0x65,  /* [3318] */
    (xdc_Char)0x72,  /* [3319] */
    (xdc_Char)0x20,  /* [3320] */
    (xdc_Char)0x69,  /* [3321] */
    (xdc_Char)0x73,  /* [3322] */
    (xdc_Char)0x20,  /* [3323] */
    (xdc_Char)0x64,  /* [3324] */
    (xdc_Char)0x69,  /* [3325] */
    (xdc_Char)0x73,  /* [3326] */
    (xdc_Char)0x61,  /* [3327] */
    (xdc_Char)0x62,  /* [3328] */
    (xdc_Char)0x6c,  /* [3329] */
    (xdc_Char)0x65,  /* [3330] */
    (xdc_Char)0x64,  /* [3331] */
    (xdc_Char)0x2e,  /* [3332] */
    (xdc_Char)0x0,  /* [3333] */
    (xdc_Char)0x41,  /* [3334] */
    (xdc_Char)0x5f,  /* [3335] */
    (xdc_Char)0x62,  /* [3336] */
    (xdc_Char)0x61,  /* [3337] */
    (xdc_Char)0x64,  /* [3338] */
    (xdc_Char)0x43,  /* [3339] */
    (xdc_Char)0x6f,  /* [3340] */
    (xdc_Char)0x6e,  /* [3341] */
    (xdc_Char)0x74,  /* [3342] */
    (xdc_Char)0x65,  /* [3343] */
    (xdc_Char)0x78,  /* [3344] */
    (xdc_Char)0x74,  /* [3345] */
    (xdc_Char)0x3a,  /* [3346] */
    (xdc_Char)0x20,  /* [3347] */
    (xdc_Char)0x62,  /* [3348] */
    (xdc_Char)0x61,  /* [3349] */
    (xdc_Char)0x64,  /* [3350] */
    (xdc_Char)0x20,  /* [3351] */
    (xdc_Char)0x63,  /* [3352] */
    (xdc_Char)0x61,  /* [3353] */
    (xdc_Char)0x6c,  /* [3354] */
    (xdc_Char)0x6c,  /* [3355] */
    (xdc_Char)0x69,  /* [3356] */
    (xdc_Char)0x6e,  /* [3357] */
    (xdc_Char)0x67,  /* [3358] */
    (xdc_Char)0x20,  /* [3359] */
    (xdc_Char)0x63,  /* [3360] */
    (xdc_Char)0x6f,  /* [3361] */
    (xdc_Char)0x6e,  /* [3362] */
    (xdc_Char)0x74,  /* [3363] */
    (xdc_Char)0x65,  /* [3364] */
    (xdc_Char)0x78,  /* [3365] */
    (xdc_Char)0x74,  /* [3366] */
    (xdc_Char)0x2e,  /* [3367] */
    (xdc_Char)0x20,  /* [3368] */
    (xdc_Char)0x53,  /* [3369] */
    (xdc_Char)0x65,  /* [3370] */
    (xdc_Char)0x65,  /* [3371] */
    (xdc_Char)0x20,  /* [3372] */
    (xdc_Char)0x47,  /* [3373] */
    (xdc_Char)0x61,  /* [3374] */
    (xdc_Char)0x74,  /* [3375] */
    (xdc_Char)0x65,  /* [3376] */
    (xdc_Char)0x4d,  /* [3377] */
    (xdc_Char)0x75,  /* [3378] */
    (xdc_Char)0x74,  /* [3379] */
    (xdc_Char)0x65,  /* [3380] */
    (xdc_Char)0x78,  /* [3381] */
    (xdc_Char)0x20,  /* [3382] */
    (xdc_Char)0x41,  /* [3383] */
    (xdc_Char)0x50,  /* [3384] */
    (xdc_Char)0x49,  /* [3385] */
    (xdc_Char)0x20,  /* [3386] */
    (xdc_Char)0x64,  /* [3387] */
    (xdc_Char)0x6f,  /* [3388] */
    (xdc_Char)0x63,  /* [3389] */
    (xdc_Char)0x20,  /* [3390] */
    (xdc_Char)0x66,  /* [3391] */
    (xdc_Char)0x6f,  /* [3392] */
    (xdc_Char)0x72,  /* [3393] */
    (xdc_Char)0x20,  /* [3394] */
    (xdc_Char)0x64,  /* [3395] */
    (xdc_Char)0x65,  /* [3396] */
    (xdc_Char)0x74,  /* [3397] */
    (xdc_Char)0x61,  /* [3398] */
    (xdc_Char)0x69,  /* [3399] */
    (xdc_Char)0x6c,  /* [3400] */
    (xdc_Char)0x73,  /* [3401] */
    (xdc_Char)0x2e,  /* [3402] */
    (xdc_Char)0x0,  /* [3403] */
    (xdc_Char)0x41,  /* [3404] */
    (xdc_Char)0x5f,  /* [3405] */
    (xdc_Char)0x62,  /* [3406] */
    (xdc_Char)0x61,  /* [3407] */
    (xdc_Char)0x64,  /* [3408] */
    (xdc_Char)0x43,  /* [3409] */
    (xdc_Char)0x6f,  /* [3410] */
    (xdc_Char)0x6e,  /* [3411] */
    (xdc_Char)0x74,  /* [3412] */
    (xdc_Char)0x65,  /* [3413] */
    (xdc_Char)0x78,  /* [3414] */
    (xdc_Char)0x74,  /* [3415] */
    (xdc_Char)0x3a,  /* [3416] */
    (xdc_Char)0x20,  /* [3417] */
    (xdc_Char)0x62,  /* [3418] */
    (xdc_Char)0x61,  /* [3419] */
    (xdc_Char)0x64,  /* [3420] */
    (xdc_Char)0x20,  /* [3421] */
    (xdc_Char)0x63,  /* [3422] */
    (xdc_Char)0x61,  /* [3423] */
    (xdc_Char)0x6c,  /* [3424] */
    (xdc_Char)0x6c,  /* [3425] */
    (xdc_Char)0x69,  /* [3426] */
    (xdc_Char)0x6e,  /* [3427] */
    (xdc_Char)0x67,  /* [3428] */
    (xdc_Char)0x20,  /* [3429] */
    (xdc_Char)0x63,  /* [3430] */
    (xdc_Char)0x6f,  /* [3431] */
    (xdc_Char)0x6e,  /* [3432] */
    (xdc_Char)0x74,  /* [3433] */
    (xdc_Char)0x65,  /* [3434] */
    (xdc_Char)0x78,  /* [3435] */
    (xdc_Char)0x74,  /* [3436] */
    (xdc_Char)0x2e,  /* [3437] */
    (xdc_Char)0x20,  /* [3438] */
    (xdc_Char)0x53,  /* [3439] */
    (xdc_Char)0x65,  /* [3440] */
    (xdc_Char)0x65,  /* [3441] */
    (xdc_Char)0x20,  /* [3442] */
    (xdc_Char)0x47,  /* [3443] */
    (xdc_Char)0x61,  /* [3444] */
    (xdc_Char)0x74,  /* [3445] */
    (xdc_Char)0x65,  /* [3446] */
    (xdc_Char)0x53,  /* [3447] */
    (xdc_Char)0x70,  /* [3448] */
    (xdc_Char)0x69,  /* [3449] */
    (xdc_Char)0x6e,  /* [3450] */
    (xdc_Char)0x6c,  /* [3451] */
    (xdc_Char)0x6f,  /* [3452] */
    (xdc_Char)0x63,  /* [3453] */
    (xdc_Char)0x6b,  /* [3454] */
    (xdc_Char)0x20,  /* [3455] */
    (xdc_Char)0x41,  /* [3456] */
    (xdc_Char)0x50,  /* [3457] */
    (xdc_Char)0x49,  /* [3458] */
    (xdc_Char)0x20,  /* [3459] */
    (xdc_Char)0x64,  /* [3460] */
    (xdc_Char)0x6f,  /* [3461] */
    (xdc_Char)0x63,  /* [3462] */
    (xdc_Char)0x20,  /* [3463] */
    (xdc_Char)0x66,  /* [3464] */
    (xdc_Char)0x6f,  /* [3465] */
    (xdc_Char)0x72,  /* [3466] */
    (xdc_Char)0x20,  /* [3467] */
    (xdc_Char)0x64,  /* [3468] */
    (xdc_Char)0x65,  /* [3469] */
    (xdc_Char)0x74,  /* [3470] */
    (xdc_Char)0x61,  /* [3471] */
    (xdc_Char)0x69,  /* [3472] */
    (xdc_Char)0x6c,  /* [3473] */
    (xdc_Char)0x73,  /* [3474] */
    (xdc_Char)0x2e,  /* [3475] */
    (xdc_Char)0x0,  /* [3476] */
    (xdc_Char)0x41,  /* [3477] */
    (xdc_Char)0x5f,  /* [3478] */
    (xdc_Char)0x69,  /* [3479] */
    (xdc_Char)0x6e,  /* [3480] */
    (xdc_Char)0x76,  /* [3481] */
    (xdc_Char)0x61,  /* [3482] */
    (xdc_Char)0x6c,  /* [3483] */
    (xdc_Char)0x69,  /* [3484] */
    (xdc_Char)0x64,  /* [3485] */
    (xdc_Char)0x51,  /* [3486] */
    (xdc_Char)0x75,  /* [3487] */
    (xdc_Char)0x61,  /* [3488] */
    (xdc_Char)0x6c,  /* [3489] */
    (xdc_Char)0x69,  /* [3490] */
    (xdc_Char)0x74,  /* [3491] */
    (xdc_Char)0x79,  /* [3492] */
    (xdc_Char)0x3a,  /* [3493] */
    (xdc_Char)0x20,  /* [3494] */
    (xdc_Char)0x53,  /* [3495] */
    (xdc_Char)0x65,  /* [3496] */
    (xdc_Char)0x65,  /* [3497] */
    (xdc_Char)0x20,  /* [3498] */
    (xdc_Char)0x47,  /* [3499] */
    (xdc_Char)0x61,  /* [3500] */
    (xdc_Char)0x74,  /* [3501] */
    (xdc_Char)0x65,  /* [3502] */
    (xdc_Char)0x53,  /* [3503] */
    (xdc_Char)0x70,  /* [3504] */
    (xdc_Char)0x69,  /* [3505] */
    (xdc_Char)0x6e,  /* [3506] */
    (xdc_Char)0x6c,  /* [3507] */
    (xdc_Char)0x6f,  /* [3508] */
    (xdc_Char)0x63,  /* [3509] */
    (xdc_Char)0x6b,  /* [3510] */
    (xdc_Char)0x20,  /* [3511] */
    (xdc_Char)0x41,  /* [3512] */
    (xdc_Char)0x50,  /* [3513] */
    (xdc_Char)0x49,  /* [3514] */
    (xdc_Char)0x20,  /* [3515] */
    (xdc_Char)0x64,  /* [3516] */
    (xdc_Char)0x6f,  /* [3517] */
    (xdc_Char)0x63,  /* [3518] */
    (xdc_Char)0x20,  /* [3519] */
    (xdc_Char)0x66,  /* [3520] */
    (xdc_Char)0x6f,  /* [3521] */
    (xdc_Char)0x72,  /* [3522] */
    (xdc_Char)0x20,  /* [3523] */
    (xdc_Char)0x64,  /* [3524] */
    (xdc_Char)0x65,  /* [3525] */
    (xdc_Char)0x74,  /* [3526] */
    (xdc_Char)0x61,  /* [3527] */
    (xdc_Char)0x69,  /* [3528] */
    (xdc_Char)0x6c,  /* [3529] */
    (xdc_Char)0x73,  /* [3530] */
    (xdc_Char)0x2e,  /* [3531] */
    (xdc_Char)0x0,  /* [3532] */
    (xdc_Char)0x61,  /* [3533] */
    (xdc_Char)0x73,  /* [3534] */
    (xdc_Char)0x73,  /* [3535] */
    (xdc_Char)0x65,  /* [3536] */
    (xdc_Char)0x72,  /* [3537] */
    (xdc_Char)0x74,  /* [3538] */
    (xdc_Char)0x69,  /* [3539] */
    (xdc_Char)0x6f,  /* [3540] */
    (xdc_Char)0x6e,  /* [3541] */
    (xdc_Char)0x20,  /* [3542] */
    (xdc_Char)0x66,  /* [3543] */
    (xdc_Char)0x61,  /* [3544] */
    (xdc_Char)0x69,  /* [3545] */
    (xdc_Char)0x6c,  /* [3546] */
    (xdc_Char)0x75,  /* [3547] */
    (xdc_Char)0x72,  /* [3548] */
    (xdc_Char)0x65,  /* [3549] */
    (xdc_Char)0x25,  /* [3550] */
    (xdc_Char)0x73,  /* [3551] */
    (xdc_Char)0x25,  /* [3552] */
    (xdc_Char)0x73,  /* [3553] */
    (xdc_Char)0x0,  /* [3554] */
    (xdc_Char)0x25,  /* [3555] */
    (xdc_Char)0x24,  /* [3556] */
    (xdc_Char)0x53,  /* [3557] */
    (xdc_Char)0x0,  /* [3558] */
    (xdc_Char)0x6f,  /* [3559] */
    (xdc_Char)0x75,  /* [3560] */
    (xdc_Char)0x74,  /* [3561] */
    (xdc_Char)0x20,  /* [3562] */
    (xdc_Char)0x6f,  /* [3563] */
    (xdc_Char)0x66,  /* [3564] */
    (xdc_Char)0x20,  /* [3565] */
    (xdc_Char)0x6d,  /* [3566] */
    (xdc_Char)0x65,  /* [3567] */
    (xdc_Char)0x6d,  /* [3568] */
    (xdc_Char)0x6f,  /* [3569] */
    (xdc_Char)0x72,  /* [3570] */
    (xdc_Char)0x79,  /* [3571] */
    (xdc_Char)0x3a,  /* [3572] */
    (xdc_Char)0x20,  /* [3573] */
    (xdc_Char)0x68,  /* [3574] */
    (xdc_Char)0x65,  /* [3575] */
    (xdc_Char)0x61,  /* [3576] */
    (xdc_Char)0x70,  /* [3577] */
    (xdc_Char)0x3d,  /* [3578] */
    (xdc_Char)0x30,  /* [3579] */
    (xdc_Char)0x78,  /* [3580] */
    (xdc_Char)0x25,  /* [3581] */
    (xdc_Char)0x78,  /* [3582] */
    (xdc_Char)0x2c,  /* [3583] */
    (xdc_Char)0x20,  /* [3584] */
    (xdc_Char)0x73,  /* [3585] */
    (xdc_Char)0x69,  /* [3586] */
    (xdc_Char)0x7a,  /* [3587] */
    (xdc_Char)0x65,  /* [3588] */
    (xdc_Char)0x3d,  /* [3589] */
    (xdc_Char)0x25,  /* [3590] */
    (xdc_Char)0x75,  /* [3591] */
    (xdc_Char)0x0,  /* [3592] */
    (xdc_Char)0x25,  /* [3593] */
    (xdc_Char)0x73,  /* [3594] */
    (xdc_Char)0x20,  /* [3595] */
    (xdc_Char)0x30,  /* [3596] */
    (xdc_Char)0x78,  /* [3597] */
    (xdc_Char)0x25,  /* [3598] */
    (xdc_Char)0x78,  /* [3599] */
    (xdc_Char)0x0,  /* [3600] */
    (xdc_Char)0x45,  /* [3601] */
    (xdc_Char)0x5f,  /* [3602] */
    (xdc_Char)0x62,  /* [3603] */
    (xdc_Char)0x61,  /* [3604] */
    (xdc_Char)0x64,  /* [3605] */
    (xdc_Char)0x4c,  /* [3606] */
    (xdc_Char)0x65,  /* [3607] */
    (xdc_Char)0x76,  /* [3608] */
    (xdc_Char)0x65,  /* [3609] */
    (xdc_Char)0x6c,  /* [3610] */
    (xdc_Char)0x3a,  /* [3611] */
    (xdc_Char)0x20,  /* [3612] */
    (xdc_Char)0x42,  /* [3613] */
    (xdc_Char)0x61,  /* [3614] */
    (xdc_Char)0x64,  /* [3615] */
    (xdc_Char)0x20,  /* [3616] */
    (xdc_Char)0x66,  /* [3617] */
    (xdc_Char)0x69,  /* [3618] */
    (xdc_Char)0x6c,  /* [3619] */
    (xdc_Char)0x74,  /* [3620] */
    (xdc_Char)0x65,  /* [3621] */
    (xdc_Char)0x72,  /* [3622] */
    (xdc_Char)0x20,  /* [3623] */
    (xdc_Char)0x6c,  /* [3624] */
    (xdc_Char)0x65,  /* [3625] */
    (xdc_Char)0x76,  /* [3626] */
    (xdc_Char)0x65,  /* [3627] */
    (xdc_Char)0x6c,  /* [3628] */
    (xdc_Char)0x20,  /* [3629] */
    (xdc_Char)0x76,  /* [3630] */
    (xdc_Char)0x61,  /* [3631] */
    (xdc_Char)0x6c,  /* [3632] */
    (xdc_Char)0x75,  /* [3633] */
    (xdc_Char)0x65,  /* [3634] */
    (xdc_Char)0x3a,  /* [3635] */
    (xdc_Char)0x20,  /* [3636] */
    (xdc_Char)0x25,  /* [3637] */
    (xdc_Char)0x64,  /* [3638] */
    (xdc_Char)0x0,  /* [3639] */
    (xdc_Char)0x66,  /* [3640] */
    (xdc_Char)0x72,  /* [3641] */
    (xdc_Char)0x65,  /* [3642] */
    (xdc_Char)0x65,  /* [3643] */
    (xdc_Char)0x28,  /* [3644] */
    (xdc_Char)0x29,  /* [3645] */
    (xdc_Char)0x20,  /* [3646] */
    (xdc_Char)0x69,  /* [3647] */
    (xdc_Char)0x6e,  /* [3648] */
    (xdc_Char)0x76,  /* [3649] */
    (xdc_Char)0x61,  /* [3650] */
    (xdc_Char)0x6c,  /* [3651] */
    (xdc_Char)0x69,  /* [3652] */
    (xdc_Char)0x64,  /* [3653] */
    (xdc_Char)0x20,  /* [3654] */
    (xdc_Char)0x69,  /* [3655] */
    (xdc_Char)0x6e,  /* [3656] */
    (xdc_Char)0x20,  /* [3657] */
    (xdc_Char)0x67,  /* [3658] */
    (xdc_Char)0x72,  /* [3659] */
    (xdc_Char)0x6f,  /* [3660] */
    (xdc_Char)0x77,  /* [3661] */
    (xdc_Char)0x74,  /* [3662] */
    (xdc_Char)0x68,  /* [3663] */
    (xdc_Char)0x2d,  /* [3664] */
    (xdc_Char)0x6f,  /* [3665] */
    (xdc_Char)0x6e,  /* [3666] */
    (xdc_Char)0x6c,  /* [3667] */
    (xdc_Char)0x79,  /* [3668] */
    (xdc_Char)0x20,  /* [3669] */
    (xdc_Char)0x48,  /* [3670] */
    (xdc_Char)0x65,  /* [3671] */
    (xdc_Char)0x61,  /* [3672] */
    (xdc_Char)0x70,  /* [3673] */
    (xdc_Char)0x4d,  /* [3674] */
    (xdc_Char)0x69,  /* [3675] */
    (xdc_Char)0x6e,  /* [3676] */
    (xdc_Char)0x0,  /* [3677] */
    (xdc_Char)0x54,  /* [3678] */
    (xdc_Char)0x68,  /* [3679] */
    (xdc_Char)0x65,  /* [3680] */
    (xdc_Char)0x20,  /* [3681] */
    (xdc_Char)0x52,  /* [3682] */
    (xdc_Char)0x54,  /* [3683] */
    (xdc_Char)0x53,  /* [3684] */
    (xdc_Char)0x20,  /* [3685] */
    (xdc_Char)0x68,  /* [3686] */
    (xdc_Char)0x65,  /* [3687] */
    (xdc_Char)0x61,  /* [3688] */
    (xdc_Char)0x70,  /* [3689] */
    (xdc_Char)0x20,  /* [3690] */
    (xdc_Char)0x69,  /* [3691] */
    (xdc_Char)0x73,  /* [3692] */
    (xdc_Char)0x20,  /* [3693] */
    (xdc_Char)0x75,  /* [3694] */
    (xdc_Char)0x73,  /* [3695] */
    (xdc_Char)0x65,  /* [3696] */
    (xdc_Char)0x64,  /* [3697] */
    (xdc_Char)0x20,  /* [3698] */
    (xdc_Char)0x75,  /* [3699] */
    (xdc_Char)0x70,  /* [3700] */
    (xdc_Char)0x2e,  /* [3701] */
    (xdc_Char)0x20,  /* [3702] */
    (xdc_Char)0x45,  /* [3703] */
    (xdc_Char)0x78,  /* [3704] */
    (xdc_Char)0x61,  /* [3705] */
    (xdc_Char)0x6d,  /* [3706] */
    (xdc_Char)0x69,  /* [3707] */
    (xdc_Char)0x6e,  /* [3708] */
    (xdc_Char)0x65,  /* [3709] */
    (xdc_Char)0x20,  /* [3710] */
    (xdc_Char)0x50,  /* [3711] */
    (xdc_Char)0x72,  /* [3712] */
    (xdc_Char)0x6f,  /* [3713] */
    (xdc_Char)0x67,  /* [3714] */
    (xdc_Char)0x72,  /* [3715] */
    (xdc_Char)0x61,  /* [3716] */
    (xdc_Char)0x6d,  /* [3717] */
    (xdc_Char)0x2e,  /* [3718] */
    (xdc_Char)0x68,  /* [3719] */
    (xdc_Char)0x65,  /* [3720] */
    (xdc_Char)0x61,  /* [3721] */
    (xdc_Char)0x70,  /* [3722] */
    (xdc_Char)0x2e,  /* [3723] */
    (xdc_Char)0x0,  /* [3724] */
    (xdc_Char)0x45,  /* [3725] */
    (xdc_Char)0x5f,  /* [3726] */
    (xdc_Char)0x62,  /* [3727] */
    (xdc_Char)0x61,  /* [3728] */
    (xdc_Char)0x64,  /* [3729] */
    (xdc_Char)0x43,  /* [3730] */
    (xdc_Char)0x6f,  /* [3731] */
    (xdc_Char)0x6d,  /* [3732] */
    (xdc_Char)0x6d,  /* [3733] */
    (xdc_Char)0x61,  /* [3734] */
    (xdc_Char)0x6e,  /* [3735] */
    (xdc_Char)0x64,  /* [3736] */
    (xdc_Char)0x3a,  /* [3737] */
    (xdc_Char)0x20,  /* [3738] */
    (xdc_Char)0x52,  /* [3739] */
    (xdc_Char)0x65,  /* [3740] */
    (xdc_Char)0x63,  /* [3741] */
    (xdc_Char)0x65,  /* [3742] */
    (xdc_Char)0x69,  /* [3743] */
    (xdc_Char)0x76,  /* [3744] */
    (xdc_Char)0x65,  /* [3745] */
    (xdc_Char)0x64,  /* [3746] */
    (xdc_Char)0x20,  /* [3747] */
    (xdc_Char)0x69,  /* [3748] */
    (xdc_Char)0x6e,  /* [3749] */
    (xdc_Char)0x76,  /* [3750] */
    (xdc_Char)0x61,  /* [3751] */
    (xdc_Char)0x6c,  /* [3752] */
    (xdc_Char)0x69,  /* [3753] */
    (xdc_Char)0x64,  /* [3754] */
    (xdc_Char)0x20,  /* [3755] */
    (xdc_Char)0x63,  /* [3756] */
    (xdc_Char)0x6f,  /* [3757] */
    (xdc_Char)0x6d,  /* [3758] */
    (xdc_Char)0x6d,  /* [3759] */
    (xdc_Char)0x61,  /* [3760] */
    (xdc_Char)0x6e,  /* [3761] */
    (xdc_Char)0x64,  /* [3762] */
    (xdc_Char)0x2c,  /* [3763] */
    (xdc_Char)0x20,  /* [3764] */
    (xdc_Char)0x69,  /* [3765] */
    (xdc_Char)0x64,  /* [3766] */
    (xdc_Char)0x3a,  /* [3767] */
    (xdc_Char)0x20,  /* [3768] */
    (xdc_Char)0x25,  /* [3769] */
    (xdc_Char)0x64,  /* [3770] */
    (xdc_Char)0x2e,  /* [3771] */
    (xdc_Char)0x0,  /* [3772] */
    (xdc_Char)0x45,  /* [3773] */
    (xdc_Char)0x5f,  /* [3774] */
    (xdc_Char)0x73,  /* [3775] */
    (xdc_Char)0x74,  /* [3776] */
    (xdc_Char)0x61,  /* [3777] */
    (xdc_Char)0x63,  /* [3778] */
    (xdc_Char)0x6b,  /* [3779] */
    (xdc_Char)0x4f,  /* [3780] */
    (xdc_Char)0x76,  /* [3781] */
    (xdc_Char)0x65,  /* [3782] */
    (xdc_Char)0x72,  /* [3783] */
    (xdc_Char)0x66,  /* [3784] */
    (xdc_Char)0x6c,  /* [3785] */
    (xdc_Char)0x6f,  /* [3786] */
    (xdc_Char)0x77,  /* [3787] */
    (xdc_Char)0x3a,  /* [3788] */
    (xdc_Char)0x20,  /* [3789] */
    (xdc_Char)0x54,  /* [3790] */
    (xdc_Char)0x61,  /* [3791] */
    (xdc_Char)0x73,  /* [3792] */
    (xdc_Char)0x6b,  /* [3793] */
    (xdc_Char)0x20,  /* [3794] */
    (xdc_Char)0x30,  /* [3795] */
    (xdc_Char)0x78,  /* [3796] */
    (xdc_Char)0x25,  /* [3797] */
    (xdc_Char)0x78,  /* [3798] */
    (xdc_Char)0x20,  /* [3799] */
    (xdc_Char)0x73,  /* [3800] */
    (xdc_Char)0x74,  /* [3801] */
    (xdc_Char)0x61,  /* [3802] */
    (xdc_Char)0x63,  /* [3803] */
    (xdc_Char)0x6b,  /* [3804] */
    (xdc_Char)0x20,  /* [3805] */
    (xdc_Char)0x6f,  /* [3806] */
    (xdc_Char)0x76,  /* [3807] */
    (xdc_Char)0x65,  /* [3808] */
    (xdc_Char)0x72,  /* [3809] */
    (xdc_Char)0x66,  /* [3810] */
    (xdc_Char)0x6c,  /* [3811] */
    (xdc_Char)0x6f,  /* [3812] */
    (xdc_Char)0x77,  /* [3813] */
    (xdc_Char)0x2e,  /* [3814] */
    (xdc_Char)0x0,  /* [3815] */
    (xdc_Char)0x45,  /* [3816] */
    (xdc_Char)0x5f,  /* [3817] */
    (xdc_Char)0x73,  /* [3818] */
    (xdc_Char)0x70,  /* [3819] */
    (xdc_Char)0x4f,  /* [3820] */
    (xdc_Char)0x75,  /* [3821] */
    (xdc_Char)0x74,  /* [3822] */
    (xdc_Char)0x4f,  /* [3823] */
    (xdc_Char)0x66,  /* [3824] */
    (xdc_Char)0x42,  /* [3825] */
    (xdc_Char)0x6f,  /* [3826] */
    (xdc_Char)0x75,  /* [3827] */
    (xdc_Char)0x6e,  /* [3828] */
    (xdc_Char)0x64,  /* [3829] */
    (xdc_Char)0x73,  /* [3830] */
    (xdc_Char)0x3a,  /* [3831] */
    (xdc_Char)0x20,  /* [3832] */
    (xdc_Char)0x54,  /* [3833] */
    (xdc_Char)0x61,  /* [3834] */
    (xdc_Char)0x73,  /* [3835] */
    (xdc_Char)0x6b,  /* [3836] */
    (xdc_Char)0x20,  /* [3837] */
    (xdc_Char)0x30,  /* [3838] */
    (xdc_Char)0x78,  /* [3839] */
    (xdc_Char)0x25,  /* [3840] */
    (xdc_Char)0x78,  /* [3841] */
    (xdc_Char)0x20,  /* [3842] */
    (xdc_Char)0x73,  /* [3843] */
    (xdc_Char)0x74,  /* [3844] */
    (xdc_Char)0x61,  /* [3845] */
    (xdc_Char)0x63,  /* [3846] */
    (xdc_Char)0x6b,  /* [3847] */
    (xdc_Char)0x20,  /* [3848] */
    (xdc_Char)0x65,  /* [3849] */
    (xdc_Char)0x72,  /* [3850] */
    (xdc_Char)0x72,  /* [3851] */
    (xdc_Char)0x6f,  /* [3852] */
    (xdc_Char)0x72,  /* [3853] */
    (xdc_Char)0x2c,  /* [3854] */
    (xdc_Char)0x20,  /* [3855] */
    (xdc_Char)0x53,  /* [3856] */
    (xdc_Char)0x50,  /* [3857] */
    (xdc_Char)0x20,  /* [3858] */
    (xdc_Char)0x3d,  /* [3859] */
    (xdc_Char)0x20,  /* [3860] */
    (xdc_Char)0x30,  /* [3861] */
    (xdc_Char)0x78,  /* [3862] */
    (xdc_Char)0x25,  /* [3863] */
    (xdc_Char)0x78,  /* [3864] */
    (xdc_Char)0x2e,  /* [3865] */
    (xdc_Char)0x0,  /* [3866] */
    (xdc_Char)0x45,  /* [3867] */
    (xdc_Char)0x5f,  /* [3868] */
    (xdc_Char)0x64,  /* [3869] */
    (xdc_Char)0x65,  /* [3870] */
    (xdc_Char)0x6c,  /* [3871] */
    (xdc_Char)0x65,  /* [3872] */
    (xdc_Char)0x74,  /* [3873] */
    (xdc_Char)0x65,  /* [3874] */
    (xdc_Char)0x4e,  /* [3875] */
    (xdc_Char)0x6f,  /* [3876] */
    (xdc_Char)0x74,  /* [3877] */
    (xdc_Char)0x41,  /* [3878] */
    (xdc_Char)0x6c,  /* [3879] */
    (xdc_Char)0x6c,  /* [3880] */
    (xdc_Char)0x6f,  /* [3881] */
    (xdc_Char)0x77,  /* [3882] */
    (xdc_Char)0x65,  /* [3883] */
    (xdc_Char)0x64,  /* [3884] */
    (xdc_Char)0x3a,  /* [3885] */
    (xdc_Char)0x20,  /* [3886] */
    (xdc_Char)0x54,  /* [3887] */
    (xdc_Char)0x61,  /* [3888] */
    (xdc_Char)0x73,  /* [3889] */
    (xdc_Char)0x6b,  /* [3890] */
    (xdc_Char)0x20,  /* [3891] */
    (xdc_Char)0x30,  /* [3892] */
    (xdc_Char)0x78,  /* [3893] */
    (xdc_Char)0x25,  /* [3894] */
    (xdc_Char)0x78,  /* [3895] */
    (xdc_Char)0x2e,  /* [3896] */
    (xdc_Char)0x0,  /* [3897] */
    (xdc_Char)0x45,  /* [3898] */
    (xdc_Char)0x5f,  /* [3899] */
    (xdc_Char)0x61,  /* [3900] */
    (xdc_Char)0x6c,  /* [3901] */
    (xdc_Char)0x72,  /* [3902] */
    (xdc_Char)0x65,  /* [3903] */
    (xdc_Char)0x61,  /* [3904] */
    (xdc_Char)0x64,  /* [3905] */
    (xdc_Char)0x79,  /* [3906] */
    (xdc_Char)0x44,  /* [3907] */
    (xdc_Char)0x65,  /* [3908] */
    (xdc_Char)0x66,  /* [3909] */
    (xdc_Char)0x69,  /* [3910] */
    (xdc_Char)0x6e,  /* [3911] */
    (xdc_Char)0x65,  /* [3912] */
    (xdc_Char)0x64,  /* [3913] */
    (xdc_Char)0x3a,  /* [3914] */
    (xdc_Char)0x20,  /* [3915] */
    (xdc_Char)0x48,  /* [3916] */
    (xdc_Char)0x77,  /* [3917] */
    (xdc_Char)0x69,  /* [3918] */
    (xdc_Char)0x20,  /* [3919] */
    (xdc_Char)0x61,  /* [3920] */
    (xdc_Char)0x6c,  /* [3921] */
    (xdc_Char)0x72,  /* [3922] */
    (xdc_Char)0x65,  /* [3923] */
    (xdc_Char)0x61,  /* [3924] */
    (xdc_Char)0x64,  /* [3925] */
    (xdc_Char)0x79,  /* [3926] */
    (xdc_Char)0x20,  /* [3927] */
    (xdc_Char)0x64,  /* [3928] */
    (xdc_Char)0x65,  /* [3929] */
    (xdc_Char)0x66,  /* [3930] */
    (xdc_Char)0x69,  /* [3931] */
    (xdc_Char)0x6e,  /* [3932] */
    (xdc_Char)0x65,  /* [3933] */
    (xdc_Char)0x64,  /* [3934] */
    (xdc_Char)0x3a,  /* [3935] */
    (xdc_Char)0x20,  /* [3936] */
    (xdc_Char)0x69,  /* [3937] */
    (xdc_Char)0x6e,  /* [3938] */
    (xdc_Char)0x74,  /* [3939] */
    (xdc_Char)0x72,  /* [3940] */
    (xdc_Char)0x23,  /* [3941] */
    (xdc_Char)0x20,  /* [3942] */
    (xdc_Char)0x25,  /* [3943] */
    (xdc_Char)0x64,  /* [3944] */
    (xdc_Char)0x0,  /* [3945] */
    (xdc_Char)0x45,  /* [3946] */
    (xdc_Char)0x5f,  /* [3947] */
    (xdc_Char)0x68,  /* [3948] */
    (xdc_Char)0x77,  /* [3949] */
    (xdc_Char)0x69,  /* [3950] */
    (xdc_Char)0x4c,  /* [3951] */
    (xdc_Char)0x69,  /* [3952] */
    (xdc_Char)0x6d,  /* [3953] */
    (xdc_Char)0x69,  /* [3954] */
    (xdc_Char)0x74,  /* [3955] */
    (xdc_Char)0x45,  /* [3956] */
    (xdc_Char)0x78,  /* [3957] */
    (xdc_Char)0x63,  /* [3958] */
    (xdc_Char)0x65,  /* [3959] */
    (xdc_Char)0x65,  /* [3960] */
    (xdc_Char)0x64,  /* [3961] */
    (xdc_Char)0x65,  /* [3962] */
    (xdc_Char)0x64,  /* [3963] */
    (xdc_Char)0x3a,  /* [3964] */
    (xdc_Char)0x20,  /* [3965] */
    (xdc_Char)0x54,  /* [3966] */
    (xdc_Char)0x6f,  /* [3967] */
    (xdc_Char)0x6f,  /* [3968] */
    (xdc_Char)0x20,  /* [3969] */
    (xdc_Char)0x6d,  /* [3970] */
    (xdc_Char)0x61,  /* [3971] */
    (xdc_Char)0x6e,  /* [3972] */
    (xdc_Char)0x79,  /* [3973] */
    (xdc_Char)0x20,  /* [3974] */
    (xdc_Char)0x69,  /* [3975] */
    (xdc_Char)0x6e,  /* [3976] */
    (xdc_Char)0x74,  /* [3977] */
    (xdc_Char)0x65,  /* [3978] */
    (xdc_Char)0x72,  /* [3979] */
    (xdc_Char)0x72,  /* [3980] */
    (xdc_Char)0x75,  /* [3981] */
    (xdc_Char)0x70,  /* [3982] */
    (xdc_Char)0x74,  /* [3983] */
    (xdc_Char)0x73,  /* [3984] */
    (xdc_Char)0x20,  /* [3985] */
    (xdc_Char)0x64,  /* [3986] */
    (xdc_Char)0x65,  /* [3987] */
    (xdc_Char)0x66,  /* [3988] */
    (xdc_Char)0x69,  /* [3989] */
    (xdc_Char)0x6e,  /* [3990] */
    (xdc_Char)0x65,  /* [3991] */
    (xdc_Char)0x64,  /* [3992] */
    (xdc_Char)0x0,  /* [3993] */
    (xdc_Char)0x45,  /* [3994] */
    (xdc_Char)0x5f,  /* [3995] */
    (xdc_Char)0x65,  /* [3996] */
    (xdc_Char)0x78,  /* [3997] */
    (xdc_Char)0x63,  /* [3998] */
    (xdc_Char)0x65,  /* [3999] */
    (xdc_Char)0x70,  /* [4000] */
    (xdc_Char)0x74,  /* [4001] */
    (xdc_Char)0x69,  /* [4002] */
    (xdc_Char)0x6f,  /* [4003] */
    (xdc_Char)0x6e,  /* [4004] */
    (xdc_Char)0x3a,  /* [4005] */
    (xdc_Char)0x20,  /* [4006] */
    (xdc_Char)0x69,  /* [4007] */
    (xdc_Char)0x64,  /* [4008] */
    (xdc_Char)0x20,  /* [4009] */
    (xdc_Char)0x3d,  /* [4010] */
    (xdc_Char)0x20,  /* [4011] */
    (xdc_Char)0x25,  /* [4012] */
    (xdc_Char)0x64,  /* [4013] */
    (xdc_Char)0x2c,  /* [4014] */
    (xdc_Char)0x20,  /* [4015] */
    (xdc_Char)0x70,  /* [4016] */
    (xdc_Char)0x63,  /* [4017] */
    (xdc_Char)0x20,  /* [4018] */
    (xdc_Char)0x3d,  /* [4019] */
    (xdc_Char)0x20,  /* [4020] */
    (xdc_Char)0x25,  /* [4021] */
    (xdc_Char)0x30,  /* [4022] */
    (xdc_Char)0x38,  /* [4023] */
    (xdc_Char)0x78,  /* [4024] */
    (xdc_Char)0x2e,  /* [4025] */
    (xdc_Char)0xa,  /* [4026] */
    (xdc_Char)0x54,  /* [4027] */
    (xdc_Char)0x6f,  /* [4028] */
    (xdc_Char)0x20,  /* [4029] */
    (xdc_Char)0x73,  /* [4030] */
    (xdc_Char)0x65,  /* [4031] */
    (xdc_Char)0x65,  /* [4032] */
    (xdc_Char)0x20,  /* [4033] */
    (xdc_Char)0x6d,  /* [4034] */
    (xdc_Char)0x6f,  /* [4035] */
    (xdc_Char)0x72,  /* [4036] */
    (xdc_Char)0x65,  /* [4037] */
    (xdc_Char)0x20,  /* [4038] */
    (xdc_Char)0x65,  /* [4039] */
    (xdc_Char)0x78,  /* [4040] */
    (xdc_Char)0x63,  /* [4041] */
    (xdc_Char)0x65,  /* [4042] */
    (xdc_Char)0x70,  /* [4043] */
    (xdc_Char)0x74,  /* [4044] */
    (xdc_Char)0x69,  /* [4045] */
    (xdc_Char)0x6f,  /* [4046] */
    (xdc_Char)0x6e,  /* [4047] */
    (xdc_Char)0x20,  /* [4048] */
    (xdc_Char)0x64,  /* [4049] */
    (xdc_Char)0x65,  /* [4050] */
    (xdc_Char)0x74,  /* [4051] */
    (xdc_Char)0x61,  /* [4052] */
    (xdc_Char)0x69,  /* [4053] */
    (xdc_Char)0x6c,  /* [4054] */
    (xdc_Char)0x2c,  /* [4055] */
    (xdc_Char)0x20,  /* [4056] */
    (xdc_Char)0x73,  /* [4057] */
    (xdc_Char)0x65,  /* [4058] */
    (xdc_Char)0x74,  /* [4059] */
    (xdc_Char)0x20,  /* [4060] */
    (xdc_Char)0x74,  /* [4061] */
    (xdc_Char)0x69,  /* [4062] */
    (xdc_Char)0x2e,  /* [4063] */
    (xdc_Char)0x73,  /* [4064] */
    (xdc_Char)0x79,  /* [4065] */
    (xdc_Char)0x73,  /* [4066] */
    (xdc_Char)0x62,  /* [4067] */
    (xdc_Char)0x69,  /* [4068] */
    (xdc_Char)0x6f,  /* [4069] */
    (xdc_Char)0x73,  /* [4070] */
    (xdc_Char)0x2e,  /* [4071] */
    (xdc_Char)0x66,  /* [4072] */
    (xdc_Char)0x61,  /* [4073] */
    (xdc_Char)0x6d,  /* [4074] */
    (xdc_Char)0x69,  /* [4075] */
    (xdc_Char)0x6c,  /* [4076] */
    (xdc_Char)0x79,  /* [4077] */
    (xdc_Char)0x2e,  /* [4078] */
    (xdc_Char)0x61,  /* [4079] */
    (xdc_Char)0x72,  /* [4080] */
    (xdc_Char)0x6d,  /* [4081] */
    (xdc_Char)0x2e,  /* [4082] */
    (xdc_Char)0x6d,  /* [4083] */
    (xdc_Char)0x33,  /* [4084] */
    (xdc_Char)0x2e,  /* [4085] */
    (xdc_Char)0x48,  /* [4086] */
    (xdc_Char)0x77,  /* [4087] */
    (xdc_Char)0x69,  /* [4088] */
    (xdc_Char)0x2e,  /* [4089] */
    (xdc_Char)0x65,  /* [4090] */
    (xdc_Char)0x6e,  /* [4091] */
    (xdc_Char)0x61,  /* [4092] */
    (xdc_Char)0x62,  /* [4093] */
    (xdc_Char)0x6c,  /* [4094] */
    (xdc_Char)0x65,  /* [4095] */
    (xdc_Char)0x45,  /* [4096] */
    (xdc_Char)0x78,  /* [4097] */
    (xdc_Char)0x63,  /* [4098] */
    (xdc_Char)0x65,  /* [4099] */
    (xdc_Char)0x70,  /* [4100] */
    (xdc_Char)0x74,  /* [4101] */
    (xdc_Char)0x69,  /* [4102] */
    (xdc_Char)0x6f,  /* [4103] */
    (xdc_Char)0x6e,  /* [4104] */
    (xdc_Char)0x20,  /* [4105] */
    (xdc_Char)0x3d,  /* [4106] */
    (xdc_Char)0x20,  /* [4107] */
    (xdc_Char)0x74,  /* [4108] */
    (xdc_Char)0x72,  /* [4109] */
    (xdc_Char)0x75,  /* [4110] */
    (xdc_Char)0x65,  /* [4111] */
    (xdc_Char)0x20,  /* [4112] */
    (xdc_Char)0x6f,  /* [4113] */
    (xdc_Char)0x72,  /* [4114] */
    (xdc_Char)0x2c,  /* [4115] */
    (xdc_Char)0xa,  /* [4116] */
    (xdc_Char)0x65,  /* [4117] */
    (xdc_Char)0x78,  /* [4118] */
    (xdc_Char)0x61,  /* [4119] */
    (xdc_Char)0x6d,  /* [4120] */
    (xdc_Char)0x69,  /* [4121] */
    (xdc_Char)0x6e,  /* [4122] */
    (xdc_Char)0x65,  /* [4123] */
    (xdc_Char)0x20,  /* [4124] */
    (xdc_Char)0x74,  /* [4125] */
    (xdc_Char)0x68,  /* [4126] */
    (xdc_Char)0x65,  /* [4127] */
    (xdc_Char)0x20,  /* [4128] */
    (xdc_Char)0x45,  /* [4129] */
    (xdc_Char)0x78,  /* [4130] */
    (xdc_Char)0x63,  /* [4131] */
    (xdc_Char)0x65,  /* [4132] */
    (xdc_Char)0x70,  /* [4133] */
    (xdc_Char)0x74,  /* [4134] */
    (xdc_Char)0x69,  /* [4135] */
    (xdc_Char)0x6f,  /* [4136] */
    (xdc_Char)0x6e,  /* [4137] */
    (xdc_Char)0x20,  /* [4138] */
    (xdc_Char)0x76,  /* [4139] */
    (xdc_Char)0x69,  /* [4140] */
    (xdc_Char)0x65,  /* [4141] */
    (xdc_Char)0x77,  /* [4142] */
    (xdc_Char)0x20,  /* [4143] */
    (xdc_Char)0x66,  /* [4144] */
    (xdc_Char)0x6f,  /* [4145] */
    (xdc_Char)0x72,  /* [4146] */
    (xdc_Char)0x20,  /* [4147] */
    (xdc_Char)0x74,  /* [4148] */
    (xdc_Char)0x68,  /* [4149] */
    (xdc_Char)0x65,  /* [4150] */
    (xdc_Char)0x20,  /* [4151] */
    (xdc_Char)0x74,  /* [4152] */
    (xdc_Char)0x69,  /* [4153] */
    (xdc_Char)0x2e,  /* [4154] */
    (xdc_Char)0x73,  /* [4155] */
    (xdc_Char)0x79,  /* [4156] */
    (xdc_Char)0x73,  /* [4157] */
    (xdc_Char)0x62,  /* [4158] */
    (xdc_Char)0x69,  /* [4159] */
    (xdc_Char)0x6f,  /* [4160] */
    (xdc_Char)0x73,  /* [4161] */
    (xdc_Char)0x2e,  /* [4162] */
    (xdc_Char)0x66,  /* [4163] */
    (xdc_Char)0x61,  /* [4164] */
    (xdc_Char)0x6d,  /* [4165] */
    (xdc_Char)0x69,  /* [4166] */
    (xdc_Char)0x6c,  /* [4167] */
    (xdc_Char)0x79,  /* [4168] */
    (xdc_Char)0x2e,  /* [4169] */
    (xdc_Char)0x61,  /* [4170] */
    (xdc_Char)0x72,  /* [4171] */
    (xdc_Char)0x6d,  /* [4172] */
    (xdc_Char)0x2e,  /* [4173] */
    (xdc_Char)0x6d,  /* [4174] */
    (xdc_Char)0x33,  /* [4175] */
    (xdc_Char)0x2e,  /* [4176] */
    (xdc_Char)0x48,  /* [4177] */
    (xdc_Char)0x77,  /* [4178] */
    (xdc_Char)0x69,  /* [4179] */
    (xdc_Char)0x20,  /* [4180] */
    (xdc_Char)0x6d,  /* [4181] */
    (xdc_Char)0x6f,  /* [4182] */
    (xdc_Char)0x64,  /* [4183] */
    (xdc_Char)0x75,  /* [4184] */
    (xdc_Char)0x6c,  /* [4185] */
    (xdc_Char)0x65,  /* [4186] */
    (xdc_Char)0x20,  /* [4187] */
    (xdc_Char)0x75,  /* [4188] */
    (xdc_Char)0x73,  /* [4189] */
    (xdc_Char)0x69,  /* [4190] */
    (xdc_Char)0x6e,  /* [4191] */
    (xdc_Char)0x67,  /* [4192] */
    (xdc_Char)0x20,  /* [4193] */
    (xdc_Char)0x52,  /* [4194] */
    (xdc_Char)0x4f,  /* [4195] */
    (xdc_Char)0x56,  /* [4196] */
    (xdc_Char)0x2e,  /* [4197] */
    (xdc_Char)0x0,  /* [4198] */
    (xdc_Char)0x45,  /* [4199] */
    (xdc_Char)0x5f,  /* [4200] */
    (xdc_Char)0x6e,  /* [4201] */
    (xdc_Char)0x6f,  /* [4202] */
    (xdc_Char)0x49,  /* [4203] */
    (xdc_Char)0x73,  /* [4204] */
    (xdc_Char)0x72,  /* [4205] */
    (xdc_Char)0x3a,  /* [4206] */
    (xdc_Char)0x20,  /* [4207] */
    (xdc_Char)0x69,  /* [4208] */
    (xdc_Char)0x64,  /* [4209] */
    (xdc_Char)0x20,  /* [4210] */
    (xdc_Char)0x3d,  /* [4211] */
    (xdc_Char)0x20,  /* [4212] */
    (xdc_Char)0x25,  /* [4213] */
    (xdc_Char)0x64,  /* [4214] */
    (xdc_Char)0x2c,  /* [4215] */
    (xdc_Char)0x20,  /* [4216] */
    (xdc_Char)0x70,  /* [4217] */
    (xdc_Char)0x63,  /* [4218] */
    (xdc_Char)0x20,  /* [4219] */
    (xdc_Char)0x3d,  /* [4220] */
    (xdc_Char)0x20,  /* [4221] */
    (xdc_Char)0x25,  /* [4222] */
    (xdc_Char)0x30,  /* [4223] */
    (xdc_Char)0x38,  /* [4224] */
    (xdc_Char)0x78,  /* [4225] */
    (xdc_Char)0x0,  /* [4226] */
    (xdc_Char)0x45,  /* [4227] */
    (xdc_Char)0x5f,  /* [4228] */
    (xdc_Char)0x4e,  /* [4229] */
    (xdc_Char)0x4d,  /* [4230] */
    (xdc_Char)0x49,  /* [4231] */
    (xdc_Char)0x3a,  /* [4232] */
    (xdc_Char)0x20,  /* [4233] */
    (xdc_Char)0x25,  /* [4234] */
    (xdc_Char)0x73,  /* [4235] */
    (xdc_Char)0x0,  /* [4236] */
    (xdc_Char)0x45,  /* [4237] */
    (xdc_Char)0x5f,  /* [4238] */
    (xdc_Char)0x68,  /* [4239] */
    (xdc_Char)0x61,  /* [4240] */
    (xdc_Char)0x72,  /* [4241] */
    (xdc_Char)0x64,  /* [4242] */
    (xdc_Char)0x46,  /* [4243] */
    (xdc_Char)0x61,  /* [4244] */
    (xdc_Char)0x75,  /* [4245] */
    (xdc_Char)0x6c,  /* [4246] */
    (xdc_Char)0x74,  /* [4247] */
    (xdc_Char)0x3a,  /* [4248] */
    (xdc_Char)0x20,  /* [4249] */
    (xdc_Char)0x25,  /* [4250] */
    (xdc_Char)0x73,  /* [4251] */
    (xdc_Char)0x0,  /* [4252] */
    (xdc_Char)0x45,  /* [4253] */
    (xdc_Char)0x5f,  /* [4254] */
    (xdc_Char)0x6d,  /* [4255] */
    (xdc_Char)0x65,  /* [4256] */
    (xdc_Char)0x6d,  /* [4257] */
    (xdc_Char)0x46,  /* [4258] */
    (xdc_Char)0x61,  /* [4259] */
    (xdc_Char)0x75,  /* [4260] */
    (xdc_Char)0x6c,  /* [4261] */
    (xdc_Char)0x74,  /* [4262] */
    (xdc_Char)0x3a,  /* [4263] */
    (xdc_Char)0x20,  /* [4264] */
    (xdc_Char)0x25,  /* [4265] */
    (xdc_Char)0x73,  /* [4266] */
    (xdc_Char)0x2c,  /* [4267] */
    (xdc_Char)0x20,  /* [4268] */
    (xdc_Char)0x61,  /* [4269] */
    (xdc_Char)0x64,  /* [4270] */
    (xdc_Char)0x64,  /* [4271] */
    (xdc_Char)0x72,  /* [4272] */
    (xdc_Char)0x65,  /* [4273] */
    (xdc_Char)0x73,  /* [4274] */
    (xdc_Char)0x73,  /* [4275] */
    (xdc_Char)0x3a,  /* [4276] */
    (xdc_Char)0x20,  /* [4277] */
    (xdc_Char)0x25,  /* [4278] */
    (xdc_Char)0x30,  /* [4279] */
    (xdc_Char)0x38,  /* [4280] */
    (xdc_Char)0x78,  /* [4281] */
    (xdc_Char)0x0,  /* [4282] */
    (xdc_Char)0x45,  /* [4283] */
    (xdc_Char)0x5f,  /* [4284] */
    (xdc_Char)0x62,  /* [4285] */
    (xdc_Char)0x75,  /* [4286] */
    (xdc_Char)0x73,  /* [4287] */
    (xdc_Char)0x46,  /* [4288] */
    (xdc_Char)0x61,  /* [4289] */
    (xdc_Char)0x75,  /* [4290] */
    (xdc_Char)0x6c,  /* [4291] */
    (xdc_Char)0x74,  /* [4292] */
    (xdc_Char)0x3a,  /* [4293] */
    (xdc_Char)0x20,  /* [4294] */
    (xdc_Char)0x25,  /* [4295] */
    (xdc_Char)0x73,  /* [4296] */
    (xdc_Char)0x2c,  /* [4297] */
    (xdc_Char)0x20,  /* [4298] */
    (xdc_Char)0x61,  /* [4299] */
    (xdc_Char)0x64,  /* [4300] */
    (xdc_Char)0x64,  /* [4301] */
    (xdc_Char)0x72,  /* [4302] */
    (xdc_Char)0x65,  /* [4303] */
    (xdc_Char)0x73,  /* [4304] */
    (xdc_Char)0x73,  /* [4305] */
    (xdc_Char)0x3a,  /* [4306] */
    (xdc_Char)0x20,  /* [4307] */
    (xdc_Char)0x25,  /* [4308] */
    (xdc_Char)0x30,  /* [4309] */
    (xdc_Char)0x38,  /* [4310] */
    (xdc_Char)0x78,  /* [4311] */
    (xdc_Char)0x0,  /* [4312] */
    (xdc_Char)0x45,  /* [4313] */
    (xdc_Char)0x5f,  /* [4314] */
    (xdc_Char)0x75,  /* [4315] */
    (xdc_Char)0x73,  /* [4316] */
    (xdc_Char)0x61,  /* [4317] */
    (xdc_Char)0x67,  /* [4318] */
    (xdc_Char)0x65,  /* [4319] */
    (xdc_Char)0x46,  /* [4320] */
    (xdc_Char)0x61,  /* [4321] */
    (xdc_Char)0x75,  /* [4322] */
    (xdc_Char)0x6c,  /* [4323] */
    (xdc_Char)0x74,  /* [4324] */
    (xdc_Char)0x3a,  /* [4325] */
    (xdc_Char)0x20,  /* [4326] */
    (xdc_Char)0x25,  /* [4327] */
    (xdc_Char)0x73,  /* [4328] */
    (xdc_Char)0x0,  /* [4329] */
    (xdc_Char)0x45,  /* [4330] */
    (xdc_Char)0x5f,  /* [4331] */
    (xdc_Char)0x73,  /* [4332] */
    (xdc_Char)0x76,  /* [4333] */
    (xdc_Char)0x43,  /* [4334] */
    (xdc_Char)0x61,  /* [4335] */
    (xdc_Char)0x6c,  /* [4336] */
    (xdc_Char)0x6c,  /* [4337] */
    (xdc_Char)0x3a,  /* [4338] */
    (xdc_Char)0x20,  /* [4339] */
    (xdc_Char)0x73,  /* [4340] */
    (xdc_Char)0x76,  /* [4341] */
    (xdc_Char)0x4e,  /* [4342] */
    (xdc_Char)0x75,  /* [4343] */
    (xdc_Char)0x6d,  /* [4344] */
    (xdc_Char)0x20,  /* [4345] */
    (xdc_Char)0x3d,  /* [4346] */
    (xdc_Char)0x20,  /* [4347] */
    (xdc_Char)0x25,  /* [4348] */
    (xdc_Char)0x64,  /* [4349] */
    (xdc_Char)0x0,  /* [4350] */
    (xdc_Char)0x45,  /* [4351] */
    (xdc_Char)0x5f,  /* [4352] */
    (xdc_Char)0x64,  /* [4353] */
    (xdc_Char)0x65,  /* [4354] */
    (xdc_Char)0x62,  /* [4355] */
    (xdc_Char)0x75,  /* [4356] */
    (xdc_Char)0x67,  /* [4357] */
    (xdc_Char)0x4d,  /* [4358] */
    (xdc_Char)0x6f,  /* [4359] */
    (xdc_Char)0x6e,  /* [4360] */
    (xdc_Char)0x3a,  /* [4361] */
    (xdc_Char)0x20,  /* [4362] */
    (xdc_Char)0x25,  /* [4363] */
    (xdc_Char)0x73,  /* [4364] */
    (xdc_Char)0x0,  /* [4365] */
    (xdc_Char)0x45,  /* [4366] */
    (xdc_Char)0x5f,  /* [4367] */
    (xdc_Char)0x72,  /* [4368] */
    (xdc_Char)0x65,  /* [4369] */
    (xdc_Char)0x73,  /* [4370] */
    (xdc_Char)0x65,  /* [4371] */
    (xdc_Char)0x72,  /* [4372] */
    (xdc_Char)0x76,  /* [4373] */
    (xdc_Char)0x65,  /* [4374] */
    (xdc_Char)0x64,  /* [4375] */
    (xdc_Char)0x3a,  /* [4376] */
    (xdc_Char)0x20,  /* [4377] */
    (xdc_Char)0x25,  /* [4378] */
    (xdc_Char)0x73,  /* [4379] */
    (xdc_Char)0x20,  /* [4380] */
    (xdc_Char)0x25,  /* [4381] */
    (xdc_Char)0x64,  /* [4382] */
    (xdc_Char)0x0,  /* [4383] */
    (xdc_Char)0x45,  /* [4384] */
    (xdc_Char)0x5f,  /* [4385] */
    (xdc_Char)0x69,  /* [4386] */
    (xdc_Char)0x6e,  /* [4387] */
    (xdc_Char)0x76,  /* [4388] */
    (xdc_Char)0x61,  /* [4389] */
    (xdc_Char)0x6c,  /* [4390] */
    (xdc_Char)0x69,  /* [4391] */
    (xdc_Char)0x64,  /* [4392] */
    (xdc_Char)0x54,  /* [4393] */
    (xdc_Char)0x69,  /* [4394] */
    (xdc_Char)0x6d,  /* [4395] */
    (xdc_Char)0x65,  /* [4396] */
    (xdc_Char)0x72,  /* [4397] */
    (xdc_Char)0x3a,  /* [4398] */
    (xdc_Char)0x20,  /* [4399] */
    (xdc_Char)0x49,  /* [4400] */
    (xdc_Char)0x6e,  /* [4401] */
    (xdc_Char)0x76,  /* [4402] */
    (xdc_Char)0x61,  /* [4403] */
    (xdc_Char)0x6c,  /* [4404] */
    (xdc_Char)0x69,  /* [4405] */
    (xdc_Char)0x64,  /* [4406] */
    (xdc_Char)0x20,  /* [4407] */
    (xdc_Char)0x54,  /* [4408] */
    (xdc_Char)0x69,  /* [4409] */
    (xdc_Char)0x6d,  /* [4410] */
    (xdc_Char)0x65,  /* [4411] */
    (xdc_Char)0x72,  /* [4412] */
    (xdc_Char)0x20,  /* [4413] */
    (xdc_Char)0x49,  /* [4414] */
    (xdc_Char)0x64,  /* [4415] */
    (xdc_Char)0x20,  /* [4416] */
    (xdc_Char)0x25,  /* [4417] */
    (xdc_Char)0x64,  /* [4418] */
    (xdc_Char)0x0,  /* [4419] */
    (xdc_Char)0x45,  /* [4420] */
    (xdc_Char)0x5f,  /* [4421] */
    (xdc_Char)0x6e,  /* [4422] */
    (xdc_Char)0x6f,  /* [4423] */
    (xdc_Char)0x74,  /* [4424] */
    (xdc_Char)0x41,  /* [4425] */
    (xdc_Char)0x76,  /* [4426] */
    (xdc_Char)0x61,  /* [4427] */
    (xdc_Char)0x69,  /* [4428] */
    (xdc_Char)0x6c,  /* [4429] */
    (xdc_Char)0x61,  /* [4430] */
    (xdc_Char)0x62,  /* [4431] */
    (xdc_Char)0x6c,  /* [4432] */
    (xdc_Char)0x65,  /* [4433] */
    (xdc_Char)0x3a,  /* [4434] */
    (xdc_Char)0x20,  /* [4435] */
    (xdc_Char)0x54,  /* [4436] */
    (xdc_Char)0x69,  /* [4437] */
    (xdc_Char)0x6d,  /* [4438] */
    (xdc_Char)0x65,  /* [4439] */
    (xdc_Char)0x72,  /* [4440] */
    (xdc_Char)0x20,  /* [4441] */
    (xdc_Char)0x6e,  /* [4442] */
    (xdc_Char)0x6f,  /* [4443] */
    (xdc_Char)0x74,  /* [4444] */
    (xdc_Char)0x20,  /* [4445] */
    (xdc_Char)0x61,  /* [4446] */
    (xdc_Char)0x76,  /* [4447] */
    (xdc_Char)0x61,  /* [4448] */
    (xdc_Char)0x69,  /* [4449] */
    (xdc_Char)0x6c,  /* [4450] */
    (xdc_Char)0x61,  /* [4451] */
    (xdc_Char)0x62,  /* [4452] */
    (xdc_Char)0x6c,  /* [4453] */
    (xdc_Char)0x65,  /* [4454] */
    (xdc_Char)0x20,  /* [4455] */
    (xdc_Char)0x25,  /* [4456] */
    (xdc_Char)0x64,  /* [4457] */
    (xdc_Char)0x0,  /* [4458] */
    (xdc_Char)0x45,  /* [4459] */
    (xdc_Char)0x5f,  /* [4460] */
    (xdc_Char)0x63,  /* [4461] */
    (xdc_Char)0x61,  /* [4462] */
    (xdc_Char)0x6e,  /* [4463] */
    (xdc_Char)0x6e,  /* [4464] */
    (xdc_Char)0x6f,  /* [4465] */
    (xdc_Char)0x74,  /* [4466] */
    (xdc_Char)0x53,  /* [4467] */
    (xdc_Char)0x75,  /* [4468] */
    (xdc_Char)0x70,  /* [4469] */
    (xdc_Char)0x70,  /* [4470] */
    (xdc_Char)0x6f,  /* [4471] */
    (xdc_Char)0x72,  /* [4472] */
    (xdc_Char)0x74,  /* [4473] */
    (xdc_Char)0x3a,  /* [4474] */
    (xdc_Char)0x20,  /* [4475] */
    (xdc_Char)0x54,  /* [4476] */
    (xdc_Char)0x69,  /* [4477] */
    (xdc_Char)0x6d,  /* [4478] */
    (xdc_Char)0x65,  /* [4479] */
    (xdc_Char)0x72,  /* [4480] */
    (xdc_Char)0x20,  /* [4481] */
    (xdc_Char)0x63,  /* [4482] */
    (xdc_Char)0x61,  /* [4483] */
    (xdc_Char)0x6e,  /* [4484] */
    (xdc_Char)0x6e,  /* [4485] */
    (xdc_Char)0x6f,  /* [4486] */
    (xdc_Char)0x74,  /* [4487] */
    (xdc_Char)0x20,  /* [4488] */
    (xdc_Char)0x73,  /* [4489] */
    (xdc_Char)0x75,  /* [4490] */
    (xdc_Char)0x70,  /* [4491] */
    (xdc_Char)0x70,  /* [4492] */
    (xdc_Char)0x6f,  /* [4493] */
    (xdc_Char)0x72,  /* [4494] */
    (xdc_Char)0x74,  /* [4495] */
    (xdc_Char)0x20,  /* [4496] */
    (xdc_Char)0x72,  /* [4497] */
    (xdc_Char)0x65,  /* [4498] */
    (xdc_Char)0x71,  /* [4499] */
    (xdc_Char)0x75,  /* [4500] */
    (xdc_Char)0x65,  /* [4501] */
    (xdc_Char)0x73,  /* [4502] */
    (xdc_Char)0x74,  /* [4503] */
    (xdc_Char)0x65,  /* [4504] */
    (xdc_Char)0x64,  /* [4505] */
    (xdc_Char)0x20,  /* [4506] */
    (xdc_Char)0x70,  /* [4507] */
    (xdc_Char)0x65,  /* [4508] */
    (xdc_Char)0x72,  /* [4509] */
    (xdc_Char)0x69,  /* [4510] */
    (xdc_Char)0x6f,  /* [4511] */
    (xdc_Char)0x64,  /* [4512] */
    (xdc_Char)0x20,  /* [4513] */
    (xdc_Char)0x25,  /* [4514] */
    (xdc_Char)0x64,  /* [4515] */
    (xdc_Char)0x0,  /* [4516] */
    (xdc_Char)0x72,  /* [4517] */
    (xdc_Char)0x65,  /* [4518] */
    (xdc_Char)0x71,  /* [4519] */
    (xdc_Char)0x75,  /* [4520] */
    (xdc_Char)0x65,  /* [4521] */
    (xdc_Char)0x73,  /* [4522] */
    (xdc_Char)0x74,  /* [4523] */
    (xdc_Char)0x65,  /* [4524] */
    (xdc_Char)0x64,  /* [4525] */
    (xdc_Char)0x20,  /* [4526] */
    (xdc_Char)0x73,  /* [4527] */
    (xdc_Char)0x69,  /* [4528] */
    (xdc_Char)0x7a,  /* [4529] */
    (xdc_Char)0x65,  /* [4530] */
    (xdc_Char)0x20,  /* [4531] */
    (xdc_Char)0x69,  /* [4532] */
    (xdc_Char)0x73,  /* [4533] */
    (xdc_Char)0x20,  /* [4534] */
    (xdc_Char)0x74,  /* [4535] */
    (xdc_Char)0x6f,  /* [4536] */
    (xdc_Char)0x6f,  /* [4537] */
    (xdc_Char)0x20,  /* [4538] */
    (xdc_Char)0x62,  /* [4539] */
    (xdc_Char)0x69,  /* [4540] */
    (xdc_Char)0x67,  /* [4541] */
    (xdc_Char)0x3a,  /* [4542] */
    (xdc_Char)0x20,  /* [4543] */
    (xdc_Char)0x68,  /* [4544] */
    (xdc_Char)0x61,  /* [4545] */
    (xdc_Char)0x6e,  /* [4546] */
    (xdc_Char)0x64,  /* [4547] */
    (xdc_Char)0x6c,  /* [4548] */
    (xdc_Char)0x65,  /* [4549] */
    (xdc_Char)0x3d,  /* [4550] */
    (xdc_Char)0x30,  /* [4551] */
    (xdc_Char)0x78,  /* [4552] */
    (xdc_Char)0x25,  /* [4553] */
    (xdc_Char)0x78,  /* [4554] */
    (xdc_Char)0x2c,  /* [4555] */
    (xdc_Char)0x20,  /* [4556] */
    (xdc_Char)0x73,  /* [4557] */
    (xdc_Char)0x69,  /* [4558] */
    (xdc_Char)0x7a,  /* [4559] */
    (xdc_Char)0x65,  /* [4560] */
    (xdc_Char)0x3d,  /* [4561] */
    (xdc_Char)0x25,  /* [4562] */
    (xdc_Char)0x75,  /* [4563] */
    (xdc_Char)0x0,  /* [4564] */
    (xdc_Char)0x6f,  /* [4565] */
    (xdc_Char)0x75,  /* [4566] */
    (xdc_Char)0x74,  /* [4567] */
    (xdc_Char)0x20,  /* [4568] */
    (xdc_Char)0x6f,  /* [4569] */
    (xdc_Char)0x66,  /* [4570] */
    (xdc_Char)0x20,  /* [4571] */
    (xdc_Char)0x6d,  /* [4572] */
    (xdc_Char)0x65,  /* [4573] */
    (xdc_Char)0x6d,  /* [4574] */
    (xdc_Char)0x6f,  /* [4575] */
    (xdc_Char)0x72,  /* [4576] */
    (xdc_Char)0x79,  /* [4577] */
    (xdc_Char)0x3a,  /* [4578] */
    (xdc_Char)0x20,  /* [4579] */
    (xdc_Char)0x68,  /* [4580] */
    (xdc_Char)0x61,  /* [4581] */
    (xdc_Char)0x6e,  /* [4582] */
    (xdc_Char)0x64,  /* [4583] */
    (xdc_Char)0x6c,  /* [4584] */
    (xdc_Char)0x65,  /* [4585] */
    (xdc_Char)0x3d,  /* [4586] */
    (xdc_Char)0x30,  /* [4587] */
    (xdc_Char)0x78,  /* [4588] */
    (xdc_Char)0x25,  /* [4589] */
    (xdc_Char)0x78,  /* [4590] */
    (xdc_Char)0x2c,  /* [4591] */
    (xdc_Char)0x20,  /* [4592] */
    (xdc_Char)0x73,  /* [4593] */
    (xdc_Char)0x69,  /* [4594] */
    (xdc_Char)0x7a,  /* [4595] */
    (xdc_Char)0x65,  /* [4596] */
    (xdc_Char)0x3d,  /* [4597] */
    (xdc_Char)0x25,  /* [4598] */
    (xdc_Char)0x75,  /* [4599] */
    (xdc_Char)0x0,  /* [4600] */
    (xdc_Char)0x45,  /* [4601] */
    (xdc_Char)0x5f,  /* [4602] */
    (xdc_Char)0x73,  /* [4603] */
    (xdc_Char)0x74,  /* [4604] */
    (xdc_Char)0x61,  /* [4605] */
    (xdc_Char)0x63,  /* [4606] */
    (xdc_Char)0x6b,  /* [4607] */
    (xdc_Char)0x4f,  /* [4608] */
    (xdc_Char)0x76,  /* [4609] */
    (xdc_Char)0x65,  /* [4610] */
    (xdc_Char)0x72,  /* [4611] */
    (xdc_Char)0x66,  /* [4612] */
    (xdc_Char)0x6c,  /* [4613] */
    (xdc_Char)0x6f,  /* [4614] */
    (xdc_Char)0x77,  /* [4615] */
    (xdc_Char)0x3a,  /* [4616] */
    (xdc_Char)0x20,  /* [4617] */
    (xdc_Char)0x49,  /* [4618] */
    (xdc_Char)0x53,  /* [4619] */
    (xdc_Char)0x52,  /* [4620] */
    (xdc_Char)0x20,  /* [4621] */
    (xdc_Char)0x73,  /* [4622] */
    (xdc_Char)0x74,  /* [4623] */
    (xdc_Char)0x61,  /* [4624] */
    (xdc_Char)0x63,  /* [4625] */
    (xdc_Char)0x6b,  /* [4626] */
    (xdc_Char)0x20,  /* [4627] */
    (xdc_Char)0x6f,  /* [4628] */
    (xdc_Char)0x76,  /* [4629] */
    (xdc_Char)0x65,  /* [4630] */
    (xdc_Char)0x72,  /* [4631] */
    (xdc_Char)0x66,  /* [4632] */
    (xdc_Char)0x6c,  /* [4633] */
    (xdc_Char)0x6f,  /* [4634] */
    (xdc_Char)0x77,  /* [4635] */
    (xdc_Char)0x2e,  /* [4636] */
    (xdc_Char)0x0,  /* [4637] */
    (xdc_Char)0x45,  /* [4638] */
    (xdc_Char)0x5f,  /* [4639] */
    (xdc_Char)0x6e,  /* [4640] */
    (xdc_Char)0x6f,  /* [4641] */
    (xdc_Char)0x61,  /* [4642] */
    (xdc_Char)0x6c,  /* [4643] */
    (xdc_Char)0x74,  /* [4644] */
    (xdc_Char)0x63,  /* [4645] */
    (xdc_Char)0x6c,  /* [4646] */
    (xdc_Char)0x6b,  /* [4647] */
    (xdc_Char)0x3a,  /* [4648] */
    (xdc_Char)0x20,  /* [4649] */
    (xdc_Char)0x54,  /* [4650] */
    (xdc_Char)0x69,  /* [4651] */
    (xdc_Char)0x6d,  /* [4652] */
    (xdc_Char)0x65,  /* [4653] */
    (xdc_Char)0x72,  /* [4654] */
    (xdc_Char)0x20,  /* [4655] */
    (xdc_Char)0x64,  /* [4656] */
    (xdc_Char)0x6f,  /* [4657] */
    (xdc_Char)0x65,  /* [4658] */
    (xdc_Char)0x73,  /* [4659] */
    (xdc_Char)0x20,  /* [4660] */
    (xdc_Char)0x6e,  /* [4661] */
    (xdc_Char)0x6f,  /* [4662] */
    (xdc_Char)0x74,  /* [4663] */
    (xdc_Char)0x20,  /* [4664] */
    (xdc_Char)0x73,  /* [4665] */
    (xdc_Char)0x75,  /* [4666] */
    (xdc_Char)0x70,  /* [4667] */
    (xdc_Char)0x70,  /* [4668] */
    (xdc_Char)0x6f,  /* [4669] */
    (xdc_Char)0x72,  /* [4670] */
    (xdc_Char)0x74,  /* [4671] */
    (xdc_Char)0x20,  /* [4672] */
    (xdc_Char)0x61,  /* [4673] */
    (xdc_Char)0x6c,  /* [4674] */
    (xdc_Char)0x74,  /* [4675] */
    (xdc_Char)0x63,  /* [4676] */
    (xdc_Char)0x6c,  /* [4677] */
    (xdc_Char)0x6b,  /* [4678] */
    (xdc_Char)0x0,  /* [4679] */
    (xdc_Char)0x45,  /* [4680] */
    (xdc_Char)0x5f,  /* [4681] */
    (xdc_Char)0x70,  /* [4682] */
    (xdc_Char)0x72,  /* [4683] */
    (xdc_Char)0x69,  /* [4684] */
    (xdc_Char)0x6f,  /* [4685] */
    (xdc_Char)0x72,  /* [4686] */
    (xdc_Char)0x69,  /* [4687] */
    (xdc_Char)0x74,  /* [4688] */
    (xdc_Char)0x79,  /* [4689] */
    (xdc_Char)0x3a,  /* [4690] */
    (xdc_Char)0x20,  /* [4691] */
    (xdc_Char)0x54,  /* [4692] */
    (xdc_Char)0x68,  /* [4693] */
    (xdc_Char)0x72,  /* [4694] */
    (xdc_Char)0x65,  /* [4695] */
    (xdc_Char)0x61,  /* [4696] */
    (xdc_Char)0x64,  /* [4697] */
    (xdc_Char)0x20,  /* [4698] */
    (xdc_Char)0x70,  /* [4699] */
    (xdc_Char)0x72,  /* [4700] */
    (xdc_Char)0x69,  /* [4701] */
    (xdc_Char)0x6f,  /* [4702] */
    (xdc_Char)0x72,  /* [4703] */
    (xdc_Char)0x69,  /* [4704] */
    (xdc_Char)0x74,  /* [4705] */
    (xdc_Char)0x79,  /* [4706] */
    (xdc_Char)0x20,  /* [4707] */
    (xdc_Char)0x69,  /* [4708] */
    (xdc_Char)0x73,  /* [4709] */
    (xdc_Char)0x20,  /* [4710] */
    (xdc_Char)0x69,  /* [4711] */
    (xdc_Char)0x6e,  /* [4712] */
    (xdc_Char)0x76,  /* [4713] */
    (xdc_Char)0x61,  /* [4714] */
    (xdc_Char)0x6c,  /* [4715] */
    (xdc_Char)0x69,  /* [4716] */
    (xdc_Char)0x64,  /* [4717] */
    (xdc_Char)0x20,  /* [4718] */
    (xdc_Char)0x25,  /* [4719] */
    (xdc_Char)0x64,  /* [4720] */
    (xdc_Char)0x0,  /* [4721] */
    (xdc_Char)0x3c,  /* [4722] */
    (xdc_Char)0x2d,  /* [4723] */
    (xdc_Char)0x2d,  /* [4724] */
    (xdc_Char)0x20,  /* [4725] */
    (xdc_Char)0x63,  /* [4726] */
    (xdc_Char)0x6f,  /* [4727] */
    (xdc_Char)0x6e,  /* [4728] */
    (xdc_Char)0x73,  /* [4729] */
    (xdc_Char)0x74,  /* [4730] */
    (xdc_Char)0x72,  /* [4731] */
    (xdc_Char)0x75,  /* [4732] */
    (xdc_Char)0x63,  /* [4733] */
    (xdc_Char)0x74,  /* [4734] */
    (xdc_Char)0x3a,  /* [4735] */
    (xdc_Char)0x20,  /* [4736] */
    (xdc_Char)0x25,  /* [4737] */
    (xdc_Char)0x70,  /* [4738] */
    (xdc_Char)0x28,  /* [4739] */
    (xdc_Char)0x27,  /* [4740] */
    (xdc_Char)0x25,  /* [4741] */
    (xdc_Char)0x73,  /* [4742] */
    (xdc_Char)0x27,  /* [4743] */
    (xdc_Char)0x29,  /* [4744] */
    (xdc_Char)0x0,  /* [4745] */
    (xdc_Char)0x3c,  /* [4746] */
    (xdc_Char)0x2d,  /* [4747] */
    (xdc_Char)0x2d,  /* [4748] */
    (xdc_Char)0x20,  /* [4749] */
    (xdc_Char)0x63,  /* [4750] */
    (xdc_Char)0x72,  /* [4751] */
    (xdc_Char)0x65,  /* [4752] */
    (xdc_Char)0x61,  /* [4753] */
    (xdc_Char)0x74,  /* [4754] */
    (xdc_Char)0x65,  /* [4755] */
    (xdc_Char)0x3a,  /* [4756] */
    (xdc_Char)0x20,  /* [4757] */
    (xdc_Char)0x25,  /* [4758] */
    (xdc_Char)0x70,  /* [4759] */
    (xdc_Char)0x28,  /* [4760] */
    (xdc_Char)0x27,  /* [4761] */
    (xdc_Char)0x25,  /* [4762] */
    (xdc_Char)0x73,  /* [4763] */
    (xdc_Char)0x27,  /* [4764] */
    (xdc_Char)0x29,  /* [4765] */
    (xdc_Char)0x0,  /* [4766] */
    (xdc_Char)0x2d,  /* [4767] */
    (xdc_Char)0x2d,  /* [4768] */
    (xdc_Char)0x3e,  /* [4769] */
    (xdc_Char)0x20,  /* [4770] */
    (xdc_Char)0x64,  /* [4771] */
    (xdc_Char)0x65,  /* [4772] */
    (xdc_Char)0x73,  /* [4773] */
    (xdc_Char)0x74,  /* [4774] */
    (xdc_Char)0x72,  /* [4775] */
    (xdc_Char)0x75,  /* [4776] */
    (xdc_Char)0x63,  /* [4777] */
    (xdc_Char)0x74,  /* [4778] */
    (xdc_Char)0x3a,  /* [4779] */
    (xdc_Char)0x20,  /* [4780] */
    (xdc_Char)0x28,  /* [4781] */
    (xdc_Char)0x25,  /* [4782] */
    (xdc_Char)0x70,  /* [4783] */
    (xdc_Char)0x29,  /* [4784] */
    (xdc_Char)0x0,  /* [4785] */
    (xdc_Char)0x2d,  /* [4786] */
    (xdc_Char)0x2d,  /* [4787] */
    (xdc_Char)0x3e,  /* [4788] */
    (xdc_Char)0x20,  /* [4789] */
    (xdc_Char)0x64,  /* [4790] */
    (xdc_Char)0x65,  /* [4791] */
    (xdc_Char)0x6c,  /* [4792] */
    (xdc_Char)0x65,  /* [4793] */
    (xdc_Char)0x74,  /* [4794] */
    (xdc_Char)0x65,  /* [4795] */
    (xdc_Char)0x3a,  /* [4796] */
    (xdc_Char)0x20,  /* [4797] */
    (xdc_Char)0x28,  /* [4798] */
    (xdc_Char)0x25,  /* [4799] */
    (xdc_Char)0x70,  /* [4800] */
    (xdc_Char)0x29,  /* [4801] */
    (xdc_Char)0x0,  /* [4802] */
    (xdc_Char)0x45,  /* [4803] */
    (xdc_Char)0x52,  /* [4804] */
    (xdc_Char)0x52,  /* [4805] */
    (xdc_Char)0x4f,  /* [4806] */
    (xdc_Char)0x52,  /* [4807] */
    (xdc_Char)0x3a,  /* [4808] */
    (xdc_Char)0x20,  /* [4809] */
    (xdc_Char)0x25,  /* [4810] */
    (xdc_Char)0x24,  /* [4811] */
    (xdc_Char)0x46,  /* [4812] */
    (xdc_Char)0x25,  /* [4813] */
    (xdc_Char)0x24,  /* [4814] */
    (xdc_Char)0x53,  /* [4815] */
    (xdc_Char)0x0,  /* [4816] */
    (xdc_Char)0x57,  /* [4817] */
    (xdc_Char)0x41,  /* [4818] */
    (xdc_Char)0x52,  /* [4819] */
    (xdc_Char)0x4e,  /* [4820] */
    (xdc_Char)0x49,  /* [4821] */
    (xdc_Char)0x4e,  /* [4822] */
    (xdc_Char)0x47,  /* [4823] */
    (xdc_Char)0x3a,  /* [4824] */
    (xdc_Char)0x20,  /* [4825] */
    (xdc_Char)0x25,  /* [4826] */
    (xdc_Char)0x24,  /* [4827] */
    (xdc_Char)0x46,  /* [4828] */
    (xdc_Char)0x25,  /* [4829] */
    (xdc_Char)0x24,  /* [4830] */
    (xdc_Char)0x53,  /* [4831] */
    (xdc_Char)0x0,  /* [4832] */
    (xdc_Char)0x25,  /* [4833] */
    (xdc_Char)0x24,  /* [4834] */
    (xdc_Char)0x46,  /* [4835] */
    (xdc_Char)0x25,  /* [4836] */
    (xdc_Char)0x24,  /* [4837] */
    (xdc_Char)0x53,  /* [4838] */
    (xdc_Char)0x0,  /* [4839] */
    (xdc_Char)0x53,  /* [4840] */
    (xdc_Char)0x74,  /* [4841] */
    (xdc_Char)0x61,  /* [4842] */
    (xdc_Char)0x72,  /* [4843] */
    (xdc_Char)0x74,  /* [4844] */
    (xdc_Char)0x3a,  /* [4845] */
    (xdc_Char)0x20,  /* [4846] */
    (xdc_Char)0x25,  /* [4847] */
    (xdc_Char)0x24,  /* [4848] */
    (xdc_Char)0x53,  /* [4849] */
    (xdc_Char)0x0,  /* [4850] */
    (xdc_Char)0x53,  /* [4851] */
    (xdc_Char)0x74,  /* [4852] */
    (xdc_Char)0x6f,  /* [4853] */
    (xdc_Char)0x70,  /* [4854] */
    (xdc_Char)0x3a,  /* [4855] */
    (xdc_Char)0x20,  /* [4856] */
    (xdc_Char)0x25,  /* [4857] */
    (xdc_Char)0x24,  /* [4858] */
    (xdc_Char)0x53,  /* [4859] */
    (xdc_Char)0x0,  /* [4860] */
    (xdc_Char)0x53,  /* [4861] */
    (xdc_Char)0x74,  /* [4862] */
    (xdc_Char)0x61,  /* [4863] */
    (xdc_Char)0x72,  /* [4864] */
    (xdc_Char)0x74,  /* [4865] */
    (xdc_Char)0x49,  /* [4866] */
    (xdc_Char)0x6e,  /* [4867] */
    (xdc_Char)0x73,  /* [4868] */
    (xdc_Char)0x74,  /* [4869] */
    (xdc_Char)0x61,  /* [4870] */
    (xdc_Char)0x6e,  /* [4871] */
    (xdc_Char)0x63,  /* [4872] */
    (xdc_Char)0x65,  /* [4873] */
    (xdc_Char)0x3a,  /* [4874] */
    (xdc_Char)0x20,  /* [4875] */
    (xdc_Char)0x25,  /* [4876] */
    (xdc_Char)0x24,  /* [4877] */
    (xdc_Char)0x53,  /* [4878] */
    (xdc_Char)0x0,  /* [4879] */
    (xdc_Char)0x53,  /* [4880] */
    (xdc_Char)0x74,  /* [4881] */
    (xdc_Char)0x6f,  /* [4882] */
    (xdc_Char)0x70,  /* [4883] */
    (xdc_Char)0x49,  /* [4884] */
    (xdc_Char)0x6e,  /* [4885] */
    (xdc_Char)0x73,  /* [4886] */
    (xdc_Char)0x74,  /* [4887] */
    (xdc_Char)0x61,  /* [4888] */
    (xdc_Char)0x6e,  /* [4889] */
    (xdc_Char)0x63,  /* [4890] */
    (xdc_Char)0x65,  /* [4891] */
    (xdc_Char)0x3a,  /* [4892] */
    (xdc_Char)0x20,  /* [4893] */
    (xdc_Char)0x25,  /* [4894] */
    (xdc_Char)0x24,  /* [4895] */
    (xdc_Char)0x53,  /* [4896] */
    (xdc_Char)0x0,  /* [4897] */
    (xdc_Char)0x4c,  /* [4898] */
    (xdc_Char)0x57,  /* [4899] */
    (xdc_Char)0x5f,  /* [4900] */
    (xdc_Char)0x64,  /* [4901] */
    (xdc_Char)0x65,  /* [4902] */
    (xdc_Char)0x6c,  /* [4903] */
    (xdc_Char)0x61,  /* [4904] */
    (xdc_Char)0x79,  /* [4905] */
    (xdc_Char)0x65,  /* [4906] */
    (xdc_Char)0x64,  /* [4907] */
    (xdc_Char)0x3a,  /* [4908] */
    (xdc_Char)0x20,  /* [4909] */
    (xdc_Char)0x64,  /* [4910] */
    (xdc_Char)0x65,  /* [4911] */
    (xdc_Char)0x6c,  /* [4912] */
    (xdc_Char)0x61,  /* [4913] */
    (xdc_Char)0x79,  /* [4914] */
    (xdc_Char)0x3a,  /* [4915] */
    (xdc_Char)0x20,  /* [4916] */
    (xdc_Char)0x25,  /* [4917] */
    (xdc_Char)0x64,  /* [4918] */
    (xdc_Char)0x0,  /* [4919] */
    (xdc_Char)0x4c,  /* [4920] */
    (xdc_Char)0x4d,  /* [4921] */
    (xdc_Char)0x5f,  /* [4922] */
    (xdc_Char)0x74,  /* [4923] */
    (xdc_Char)0x69,  /* [4924] */
    (xdc_Char)0x63,  /* [4925] */
    (xdc_Char)0x6b,  /* [4926] */
    (xdc_Char)0x3a,  /* [4927] */
    (xdc_Char)0x20,  /* [4928] */
    (xdc_Char)0x74,  /* [4929] */
    (xdc_Char)0x69,  /* [4930] */
    (xdc_Char)0x63,  /* [4931] */
    (xdc_Char)0x6b,  /* [4932] */
    (xdc_Char)0x3a,  /* [4933] */
    (xdc_Char)0x20,  /* [4934] */
    (xdc_Char)0x25,  /* [4935] */
    (xdc_Char)0x64,  /* [4936] */
    (xdc_Char)0x0,  /* [4937] */
    (xdc_Char)0x4c,  /* [4938] */
    (xdc_Char)0x4d,  /* [4939] */
    (xdc_Char)0x5f,  /* [4940] */
    (xdc_Char)0x62,  /* [4941] */
    (xdc_Char)0x65,  /* [4942] */
    (xdc_Char)0x67,  /* [4943] */
    (xdc_Char)0x69,  /* [4944] */
    (xdc_Char)0x6e,  /* [4945] */
    (xdc_Char)0x3a,  /* [4946] */
    (xdc_Char)0x20,  /* [4947] */
    (xdc_Char)0x63,  /* [4948] */
    (xdc_Char)0x6c,  /* [4949] */
    (xdc_Char)0x6b,  /* [4950] */
    (xdc_Char)0x3a,  /* [4951] */
    (xdc_Char)0x20,  /* [4952] */
    (xdc_Char)0x30,  /* [4953] */
    (xdc_Char)0x78,  /* [4954] */
    (xdc_Char)0x25,  /* [4955] */
    (xdc_Char)0x78,  /* [4956] */
    (xdc_Char)0x2c,  /* [4957] */
    (xdc_Char)0x20,  /* [4958] */
    (xdc_Char)0x66,  /* [4959] */
    (xdc_Char)0x75,  /* [4960] */
    (xdc_Char)0x6e,  /* [4961] */
    (xdc_Char)0x63,  /* [4962] */
    (xdc_Char)0x3a,  /* [4963] */
    (xdc_Char)0x20,  /* [4964] */
    (xdc_Char)0x30,  /* [4965] */
    (xdc_Char)0x78,  /* [4966] */
    (xdc_Char)0x25,  /* [4967] */
    (xdc_Char)0x78,  /* [4968] */
    (xdc_Char)0x0,  /* [4969] */
    (xdc_Char)0x4c,  /* [4970] */
    (xdc_Char)0x4d,  /* [4971] */
    (xdc_Char)0x5f,  /* [4972] */
    (xdc_Char)0x70,  /* [4973] */
    (xdc_Char)0x6f,  /* [4974] */
    (xdc_Char)0x73,  /* [4975] */
    (xdc_Char)0x74,  /* [4976] */
    (xdc_Char)0x3a,  /* [4977] */
    (xdc_Char)0x20,  /* [4978] */
    (xdc_Char)0x65,  /* [4979] */
    (xdc_Char)0x76,  /* [4980] */
    (xdc_Char)0x65,  /* [4981] */
    (xdc_Char)0x6e,  /* [4982] */
    (xdc_Char)0x74,  /* [4983] */
    (xdc_Char)0x3a,  /* [4984] */
    (xdc_Char)0x20,  /* [4985] */
    (xdc_Char)0x30,  /* [4986] */
    (xdc_Char)0x78,  /* [4987] */
    (xdc_Char)0x25,  /* [4988] */
    (xdc_Char)0x78,  /* [4989] */
    (xdc_Char)0x2c,  /* [4990] */
    (xdc_Char)0x20,  /* [4991] */
    (xdc_Char)0x63,  /* [4992] */
    (xdc_Char)0x75,  /* [4993] */
    (xdc_Char)0x72,  /* [4994] */
    (xdc_Char)0x72,  /* [4995] */
    (xdc_Char)0x45,  /* [4996] */
    (xdc_Char)0x76,  /* [4997] */
    (xdc_Char)0x65,  /* [4998] */
    (xdc_Char)0x6e,  /* [4999] */
    (xdc_Char)0x74,  /* [5000] */
    (xdc_Char)0x73,  /* [5001] */
    (xdc_Char)0x3a,  /* [5002] */
    (xdc_Char)0x20,  /* [5003] */
    (xdc_Char)0x30,  /* [5004] */
    (xdc_Char)0x78,  /* [5005] */
    (xdc_Char)0x25,  /* [5006] */
    (xdc_Char)0x78,  /* [5007] */
    (xdc_Char)0x2c,  /* [5008] */
    (xdc_Char)0x20,  /* [5009] */
    (xdc_Char)0x65,  /* [5010] */
    (xdc_Char)0x76,  /* [5011] */
    (xdc_Char)0x65,  /* [5012] */
    (xdc_Char)0x6e,  /* [5013] */
    (xdc_Char)0x74,  /* [5014] */
    (xdc_Char)0x49,  /* [5015] */
    (xdc_Char)0x64,  /* [5016] */
    (xdc_Char)0x3a,  /* [5017] */
    (xdc_Char)0x20,  /* [5018] */
    (xdc_Char)0x30,  /* [5019] */
    (xdc_Char)0x78,  /* [5020] */
    (xdc_Char)0x25,  /* [5021] */
    (xdc_Char)0x78,  /* [5022] */
    (xdc_Char)0x0,  /* [5023] */
    (xdc_Char)0x4c,  /* [5024] */
    (xdc_Char)0x4d,  /* [5025] */
    (xdc_Char)0x5f,  /* [5026] */
    (xdc_Char)0x70,  /* [5027] */
    (xdc_Char)0x65,  /* [5028] */
    (xdc_Char)0x6e,  /* [5029] */
    (xdc_Char)0x64,  /* [5030] */
    (xdc_Char)0x3a,  /* [5031] */
    (xdc_Char)0x20,  /* [5032] */
    (xdc_Char)0x65,  /* [5033] */
    (xdc_Char)0x76,  /* [5034] */
    (xdc_Char)0x65,  /* [5035] */
    (xdc_Char)0x6e,  /* [5036] */
    (xdc_Char)0x74,  /* [5037] */
    (xdc_Char)0x3a,  /* [5038] */
    (xdc_Char)0x20,  /* [5039] */
    (xdc_Char)0x30,  /* [5040] */
    (xdc_Char)0x78,  /* [5041] */
    (xdc_Char)0x25,  /* [5042] */
    (xdc_Char)0x78,  /* [5043] */
    (xdc_Char)0x2c,  /* [5044] */
    (xdc_Char)0x20,  /* [5045] */
    (xdc_Char)0x63,  /* [5046] */
    (xdc_Char)0x75,  /* [5047] */
    (xdc_Char)0x72,  /* [5048] */
    (xdc_Char)0x72,  /* [5049] */
    (xdc_Char)0x45,  /* [5050] */
    (xdc_Char)0x76,  /* [5051] */
    (xdc_Char)0x65,  /* [5052] */
    (xdc_Char)0x6e,  /* [5053] */
    (xdc_Char)0x74,  /* [5054] */
    (xdc_Char)0x73,  /* [5055] */
    (xdc_Char)0x3a,  /* [5056] */
    (xdc_Char)0x20,  /* [5057] */
    (xdc_Char)0x30,  /* [5058] */
    (xdc_Char)0x78,  /* [5059] */
    (xdc_Char)0x25,  /* [5060] */
    (xdc_Char)0x78,  /* [5061] */
    (xdc_Char)0x2c,  /* [5062] */
    (xdc_Char)0x20,  /* [5063] */
    (xdc_Char)0x61,  /* [5064] */
    (xdc_Char)0x6e,  /* [5065] */
    (xdc_Char)0x64,  /* [5066] */
    (xdc_Char)0x4d,  /* [5067] */
    (xdc_Char)0x61,  /* [5068] */
    (xdc_Char)0x73,  /* [5069] */
    (xdc_Char)0x6b,  /* [5070] */
    (xdc_Char)0x3a,  /* [5071] */
    (xdc_Char)0x20,  /* [5072] */
    (xdc_Char)0x30,  /* [5073] */
    (xdc_Char)0x78,  /* [5074] */
    (xdc_Char)0x25,  /* [5075] */
    (xdc_Char)0x78,  /* [5076] */
    (xdc_Char)0x2c,  /* [5077] */
    (xdc_Char)0x20,  /* [5078] */
    (xdc_Char)0x6f,  /* [5079] */
    (xdc_Char)0x72,  /* [5080] */
    (xdc_Char)0x4d,  /* [5081] */
    (xdc_Char)0x61,  /* [5082] */
    (xdc_Char)0x73,  /* [5083] */
    (xdc_Char)0x6b,  /* [5084] */
    (xdc_Char)0x3a,  /* [5085] */
    (xdc_Char)0x20,  /* [5086] */
    (xdc_Char)0x30,  /* [5087] */
    (xdc_Char)0x78,  /* [5088] */
    (xdc_Char)0x25,  /* [5089] */
    (xdc_Char)0x78,  /* [5090] */
    (xdc_Char)0x2c,  /* [5091] */
    (xdc_Char)0x20,  /* [5092] */
    (xdc_Char)0x74,  /* [5093] */
    (xdc_Char)0x69,  /* [5094] */
    (xdc_Char)0x6d,  /* [5095] */
    (xdc_Char)0x65,  /* [5096] */
    (xdc_Char)0x6f,  /* [5097] */
    (xdc_Char)0x75,  /* [5098] */
    (xdc_Char)0x74,  /* [5099] */
    (xdc_Char)0x3a,  /* [5100] */
    (xdc_Char)0x20,  /* [5101] */
    (xdc_Char)0x25,  /* [5102] */
    (xdc_Char)0x64,  /* [5103] */
    (xdc_Char)0x0,  /* [5104] */
    (xdc_Char)0x4c,  /* [5105] */
    (xdc_Char)0x4d,  /* [5106] */
    (xdc_Char)0x5f,  /* [5107] */
    (xdc_Char)0x70,  /* [5108] */
    (xdc_Char)0x6f,  /* [5109] */
    (xdc_Char)0x73,  /* [5110] */
    (xdc_Char)0x74,  /* [5111] */
    (xdc_Char)0x3a,  /* [5112] */
    (xdc_Char)0x20,  /* [5113] */
    (xdc_Char)0x73,  /* [5114] */
    (xdc_Char)0x65,  /* [5115] */
    (xdc_Char)0x6d,  /* [5116] */
    (xdc_Char)0x3a,  /* [5117] */
    (xdc_Char)0x20,  /* [5118] */
    (xdc_Char)0x30,  /* [5119] */
    (xdc_Char)0x78,  /* [5120] */
    (xdc_Char)0x25,  /* [5121] */
    (xdc_Char)0x78,  /* [5122] */
    (xdc_Char)0x2c,  /* [5123] */
    (xdc_Char)0x20,  /* [5124] */
    (xdc_Char)0x63,  /* [5125] */
    (xdc_Char)0x6f,  /* [5126] */
    (xdc_Char)0x75,  /* [5127] */
    (xdc_Char)0x6e,  /* [5128] */
    (xdc_Char)0x74,  /* [5129] */
    (xdc_Char)0x3a,  /* [5130] */
    (xdc_Char)0x20,  /* [5131] */
    (xdc_Char)0x25,  /* [5132] */
    (xdc_Char)0x64,  /* [5133] */
    (xdc_Char)0x0,  /* [5134] */
    (xdc_Char)0x4c,  /* [5135] */
    (xdc_Char)0x4d,  /* [5136] */
    (xdc_Char)0x5f,  /* [5137] */
    (xdc_Char)0x70,  /* [5138] */
    (xdc_Char)0x65,  /* [5139] */
    (xdc_Char)0x6e,  /* [5140] */
    (xdc_Char)0x64,  /* [5141] */
    (xdc_Char)0x3a,  /* [5142] */
    (xdc_Char)0x20,  /* [5143] */
    (xdc_Char)0x73,  /* [5144] */
    (xdc_Char)0x65,  /* [5145] */
    (xdc_Char)0x6d,  /* [5146] */
    (xdc_Char)0x3a,  /* [5147] */
    (xdc_Char)0x20,  /* [5148] */
    (xdc_Char)0x30,  /* [5149] */
    (xdc_Char)0x78,  /* [5150] */
    (xdc_Char)0x25,  /* [5151] */
    (xdc_Char)0x78,  /* [5152] */
    (xdc_Char)0x2c,  /* [5153] */
    (xdc_Char)0x20,  /* [5154] */
    (xdc_Char)0x63,  /* [5155] */
    (xdc_Char)0x6f,  /* [5156] */
    (xdc_Char)0x75,  /* [5157] */
    (xdc_Char)0x6e,  /* [5158] */
    (xdc_Char)0x74,  /* [5159] */
    (xdc_Char)0x3a,  /* [5160] */
    (xdc_Char)0x20,  /* [5161] */
    (xdc_Char)0x25,  /* [5162] */
    (xdc_Char)0x64,  /* [5163] */
    (xdc_Char)0x2c,  /* [5164] */
    (xdc_Char)0x20,  /* [5165] */
    (xdc_Char)0x74,  /* [5166] */
    (xdc_Char)0x69,  /* [5167] */
    (xdc_Char)0x6d,  /* [5168] */
    (xdc_Char)0x65,  /* [5169] */
    (xdc_Char)0x6f,  /* [5170] */
    (xdc_Char)0x75,  /* [5171] */
    (xdc_Char)0x74,  /* [5172] */
    (xdc_Char)0x3a,  /* [5173] */
    (xdc_Char)0x20,  /* [5174] */
    (xdc_Char)0x25,  /* [5175] */
    (xdc_Char)0x64,  /* [5176] */
    (xdc_Char)0x0,  /* [5177] */
    (xdc_Char)0x4c,  /* [5178] */
    (xdc_Char)0x4d,  /* [5179] */
    (xdc_Char)0x5f,  /* [5180] */
    (xdc_Char)0x62,  /* [5181] */
    (xdc_Char)0x65,  /* [5182] */
    (xdc_Char)0x67,  /* [5183] */
    (xdc_Char)0x69,  /* [5184] */
    (xdc_Char)0x6e,  /* [5185] */
    (xdc_Char)0x3a,  /* [5186] */
    (xdc_Char)0x20,  /* [5187] */
    (xdc_Char)0x73,  /* [5188] */
    (xdc_Char)0x77,  /* [5189] */
    (xdc_Char)0x69,  /* [5190] */
    (xdc_Char)0x3a,  /* [5191] */
    (xdc_Char)0x20,  /* [5192] */
    (xdc_Char)0x30,  /* [5193] */
    (xdc_Char)0x78,  /* [5194] */
    (xdc_Char)0x25,  /* [5195] */
    (xdc_Char)0x78,  /* [5196] */
    (xdc_Char)0x2c,  /* [5197] */
    (xdc_Char)0x20,  /* [5198] */
    (xdc_Char)0x66,  /* [5199] */
    (xdc_Char)0x75,  /* [5200] */
    (xdc_Char)0x6e,  /* [5201] */
    (xdc_Char)0x63,  /* [5202] */
    (xdc_Char)0x3a,  /* [5203] */
    (xdc_Char)0x20,  /* [5204] */
    (xdc_Char)0x30,  /* [5205] */
    (xdc_Char)0x78,  /* [5206] */
    (xdc_Char)0x25,  /* [5207] */
    (xdc_Char)0x78,  /* [5208] */
    (xdc_Char)0x2c,  /* [5209] */
    (xdc_Char)0x20,  /* [5210] */
    (xdc_Char)0x70,  /* [5211] */
    (xdc_Char)0x72,  /* [5212] */
    (xdc_Char)0x65,  /* [5213] */
    (xdc_Char)0x54,  /* [5214] */
    (xdc_Char)0x68,  /* [5215] */
    (xdc_Char)0x72,  /* [5216] */
    (xdc_Char)0x65,  /* [5217] */
    (xdc_Char)0x61,  /* [5218] */
    (xdc_Char)0x64,  /* [5219] */
    (xdc_Char)0x3a,  /* [5220] */
    (xdc_Char)0x20,  /* [5221] */
    (xdc_Char)0x25,  /* [5222] */
    (xdc_Char)0x64,  /* [5223] */
    (xdc_Char)0x0,  /* [5224] */
    (xdc_Char)0x4c,  /* [5225] */
    (xdc_Char)0x44,  /* [5226] */
    (xdc_Char)0x5f,  /* [5227] */
    (xdc_Char)0x65,  /* [5228] */
    (xdc_Char)0x6e,  /* [5229] */
    (xdc_Char)0x64,  /* [5230] */
    (xdc_Char)0x3a,  /* [5231] */
    (xdc_Char)0x20,  /* [5232] */
    (xdc_Char)0x73,  /* [5233] */
    (xdc_Char)0x77,  /* [5234] */
    (xdc_Char)0x69,  /* [5235] */
    (xdc_Char)0x3a,  /* [5236] */
    (xdc_Char)0x20,  /* [5237] */
    (xdc_Char)0x30,  /* [5238] */
    (xdc_Char)0x78,  /* [5239] */
    (xdc_Char)0x25,  /* [5240] */
    (xdc_Char)0x78,  /* [5241] */
    (xdc_Char)0x0,  /* [5242] */
    (xdc_Char)0x4c,  /* [5243] */
    (xdc_Char)0x4d,  /* [5244] */
    (xdc_Char)0x5f,  /* [5245] */
    (xdc_Char)0x70,  /* [5246] */
    (xdc_Char)0x6f,  /* [5247] */
    (xdc_Char)0x73,  /* [5248] */
    (xdc_Char)0x74,  /* [5249] */
    (xdc_Char)0x3a,  /* [5250] */
    (xdc_Char)0x20,  /* [5251] */
    (xdc_Char)0x73,  /* [5252] */
    (xdc_Char)0x77,  /* [5253] */
    (xdc_Char)0x69,  /* [5254] */
    (xdc_Char)0x3a,  /* [5255] */
    (xdc_Char)0x20,  /* [5256] */
    (xdc_Char)0x30,  /* [5257] */
    (xdc_Char)0x78,  /* [5258] */
    (xdc_Char)0x25,  /* [5259] */
    (xdc_Char)0x78,  /* [5260] */
    (xdc_Char)0x2c,  /* [5261] */
    (xdc_Char)0x20,  /* [5262] */
    (xdc_Char)0x66,  /* [5263] */
    (xdc_Char)0x75,  /* [5264] */
    (xdc_Char)0x6e,  /* [5265] */
    (xdc_Char)0x63,  /* [5266] */
    (xdc_Char)0x3a,  /* [5267] */
    (xdc_Char)0x20,  /* [5268] */
    (xdc_Char)0x30,  /* [5269] */
    (xdc_Char)0x78,  /* [5270] */
    (xdc_Char)0x25,  /* [5271] */
    (xdc_Char)0x78,  /* [5272] */
    (xdc_Char)0x2c,  /* [5273] */
    (xdc_Char)0x20,  /* [5274] */
    (xdc_Char)0x70,  /* [5275] */
    (xdc_Char)0x72,  /* [5276] */
    (xdc_Char)0x69,  /* [5277] */
    (xdc_Char)0x3a,  /* [5278] */
    (xdc_Char)0x20,  /* [5279] */
    (xdc_Char)0x25,  /* [5280] */
    (xdc_Char)0x64,  /* [5281] */
    (xdc_Char)0x0,  /* [5282] */
    (xdc_Char)0x4c,  /* [5283] */
    (xdc_Char)0x4d,  /* [5284] */
    (xdc_Char)0x5f,  /* [5285] */
    (xdc_Char)0x73,  /* [5286] */
    (xdc_Char)0x77,  /* [5287] */
    (xdc_Char)0x69,  /* [5288] */
    (xdc_Char)0x74,  /* [5289] */
    (xdc_Char)0x63,  /* [5290] */
    (xdc_Char)0x68,  /* [5291] */
    (xdc_Char)0x3a,  /* [5292] */
    (xdc_Char)0x20,  /* [5293] */
    (xdc_Char)0x6f,  /* [5294] */
    (xdc_Char)0x6c,  /* [5295] */
    (xdc_Char)0x64,  /* [5296] */
    (xdc_Char)0x74,  /* [5297] */
    (xdc_Char)0x73,  /* [5298] */
    (xdc_Char)0x6b,  /* [5299] */
    (xdc_Char)0x3a,  /* [5300] */
    (xdc_Char)0x20,  /* [5301] */
    (xdc_Char)0x30,  /* [5302] */
    (xdc_Char)0x78,  /* [5303] */
    (xdc_Char)0x25,  /* [5304] */
    (xdc_Char)0x78,  /* [5305] */
    (xdc_Char)0x2c,  /* [5306] */
    (xdc_Char)0x20,  /* [5307] */
    (xdc_Char)0x6f,  /* [5308] */
    (xdc_Char)0x6c,  /* [5309] */
    (xdc_Char)0x64,  /* [5310] */
    (xdc_Char)0x66,  /* [5311] */
    (xdc_Char)0x75,  /* [5312] */
    (xdc_Char)0x6e,  /* [5313] */
    (xdc_Char)0x63,  /* [5314] */
    (xdc_Char)0x3a,  /* [5315] */
    (xdc_Char)0x20,  /* [5316] */
    (xdc_Char)0x30,  /* [5317] */
    (xdc_Char)0x78,  /* [5318] */
    (xdc_Char)0x25,  /* [5319] */
    (xdc_Char)0x78,  /* [5320] */
    (xdc_Char)0x2c,  /* [5321] */
    (xdc_Char)0x20,  /* [5322] */
    (xdc_Char)0x6e,  /* [5323] */
    (xdc_Char)0x65,  /* [5324] */
    (xdc_Char)0x77,  /* [5325] */
    (xdc_Char)0x74,  /* [5326] */
    (xdc_Char)0x73,  /* [5327] */
    (xdc_Char)0x6b,  /* [5328] */
    (xdc_Char)0x3a,  /* [5329] */
    (xdc_Char)0x20,  /* [5330] */
    (xdc_Char)0x30,  /* [5331] */
    (xdc_Char)0x78,  /* [5332] */
    (xdc_Char)0x25,  /* [5333] */
    (xdc_Char)0x78,  /* [5334] */
    (xdc_Char)0x2c,  /* [5335] */
    (xdc_Char)0x20,  /* [5336] */
    (xdc_Char)0x6e,  /* [5337] */
    (xdc_Char)0x65,  /* [5338] */
    (xdc_Char)0x77,  /* [5339] */
    (xdc_Char)0x66,  /* [5340] */
    (xdc_Char)0x75,  /* [5341] */
    (xdc_Char)0x6e,  /* [5342] */
    (xdc_Char)0x63,  /* [5343] */
    (xdc_Char)0x3a,  /* [5344] */
    (xdc_Char)0x20,  /* [5345] */
    (xdc_Char)0x30,  /* [5346] */
    (xdc_Char)0x78,  /* [5347] */
    (xdc_Char)0x25,  /* [5348] */
    (xdc_Char)0x78,  /* [5349] */
    (xdc_Char)0x0,  /* [5350] */
    (xdc_Char)0x4c,  /* [5351] */
    (xdc_Char)0x4d,  /* [5352] */
    (xdc_Char)0x5f,  /* [5353] */
    (xdc_Char)0x73,  /* [5354] */
    (xdc_Char)0x6c,  /* [5355] */
    (xdc_Char)0x65,  /* [5356] */
    (xdc_Char)0x65,  /* [5357] */
    (xdc_Char)0x70,  /* [5358] */
    (xdc_Char)0x3a,  /* [5359] */
    (xdc_Char)0x20,  /* [5360] */
    (xdc_Char)0x74,  /* [5361] */
    (xdc_Char)0x73,  /* [5362] */
    (xdc_Char)0x6b,  /* [5363] */
    (xdc_Char)0x3a,  /* [5364] */
    (xdc_Char)0x20,  /* [5365] */
    (xdc_Char)0x30,  /* [5366] */
    (xdc_Char)0x78,  /* [5367] */
    (xdc_Char)0x25,  /* [5368] */
    (xdc_Char)0x78,  /* [5369] */
    (xdc_Char)0x2c,  /* [5370] */
    (xdc_Char)0x20,  /* [5371] */
    (xdc_Char)0x66,  /* [5372] */
    (xdc_Char)0x75,  /* [5373] */
    (xdc_Char)0x6e,  /* [5374] */
    (xdc_Char)0x63,  /* [5375] */
    (xdc_Char)0x3a,  /* [5376] */
    (xdc_Char)0x20,  /* [5377] */
    (xdc_Char)0x30,  /* [5378] */
    (xdc_Char)0x78,  /* [5379] */
    (xdc_Char)0x25,  /* [5380] */
    (xdc_Char)0x78,  /* [5381] */
    (xdc_Char)0x2c,  /* [5382] */
    (xdc_Char)0x20,  /* [5383] */
    (xdc_Char)0x74,  /* [5384] */
    (xdc_Char)0x69,  /* [5385] */
    (xdc_Char)0x6d,  /* [5386] */
    (xdc_Char)0x65,  /* [5387] */
    (xdc_Char)0x6f,  /* [5388] */
    (xdc_Char)0x75,  /* [5389] */
    (xdc_Char)0x74,  /* [5390] */
    (xdc_Char)0x3a,  /* [5391] */
    (xdc_Char)0x20,  /* [5392] */
    (xdc_Char)0x25,  /* [5393] */
    (xdc_Char)0x64,  /* [5394] */
    (xdc_Char)0x0,  /* [5395] */
    (xdc_Char)0x4c,  /* [5396] */
    (xdc_Char)0x44,  /* [5397] */
    (xdc_Char)0x5f,  /* [5398] */
    (xdc_Char)0x72,  /* [5399] */
    (xdc_Char)0x65,  /* [5400] */
    (xdc_Char)0x61,  /* [5401] */
    (xdc_Char)0x64,  /* [5402] */
    (xdc_Char)0x79,  /* [5403] */
    (xdc_Char)0x3a,  /* [5404] */
    (xdc_Char)0x20,  /* [5405] */
    (xdc_Char)0x74,  /* [5406] */
    (xdc_Char)0x73,  /* [5407] */
    (xdc_Char)0x6b,  /* [5408] */
    (xdc_Char)0x3a,  /* [5409] */
    (xdc_Char)0x20,  /* [5410] */
    (xdc_Char)0x30,  /* [5411] */
    (xdc_Char)0x78,  /* [5412] */
    (xdc_Char)0x25,  /* [5413] */
    (xdc_Char)0x78,  /* [5414] */
    (xdc_Char)0x2c,  /* [5415] */
    (xdc_Char)0x20,  /* [5416] */
    (xdc_Char)0x66,  /* [5417] */
    (xdc_Char)0x75,  /* [5418] */
    (xdc_Char)0x6e,  /* [5419] */
    (xdc_Char)0x63,  /* [5420] */
    (xdc_Char)0x3a,  /* [5421] */
    (xdc_Char)0x20,  /* [5422] */
    (xdc_Char)0x30,  /* [5423] */
    (xdc_Char)0x78,  /* [5424] */
    (xdc_Char)0x25,  /* [5425] */
    (xdc_Char)0x78,  /* [5426] */
    (xdc_Char)0x2c,  /* [5427] */
    (xdc_Char)0x20,  /* [5428] */
    (xdc_Char)0x70,  /* [5429] */
    (xdc_Char)0x72,  /* [5430] */
    (xdc_Char)0x69,  /* [5431] */
    (xdc_Char)0x3a,  /* [5432] */
    (xdc_Char)0x20,  /* [5433] */
    (xdc_Char)0x25,  /* [5434] */
    (xdc_Char)0x64,  /* [5435] */
    (xdc_Char)0x0,  /* [5436] */
    (xdc_Char)0x4c,  /* [5437] */
    (xdc_Char)0x44,  /* [5438] */
    (xdc_Char)0x5f,  /* [5439] */
    (xdc_Char)0x62,  /* [5440] */
    (xdc_Char)0x6c,  /* [5441] */
    (xdc_Char)0x6f,  /* [5442] */
    (xdc_Char)0x63,  /* [5443] */
    (xdc_Char)0x6b,  /* [5444] */
    (xdc_Char)0x3a,  /* [5445] */
    (xdc_Char)0x20,  /* [5446] */
    (xdc_Char)0x74,  /* [5447] */
    (xdc_Char)0x73,  /* [5448] */
    (xdc_Char)0x6b,  /* [5449] */
    (xdc_Char)0x3a,  /* [5450] */
    (xdc_Char)0x20,  /* [5451] */
    (xdc_Char)0x30,  /* [5452] */
    (xdc_Char)0x78,  /* [5453] */
    (xdc_Char)0x25,  /* [5454] */
    (xdc_Char)0x78,  /* [5455] */
    (xdc_Char)0x2c,  /* [5456] */
    (xdc_Char)0x20,  /* [5457] */
    (xdc_Char)0x66,  /* [5458] */
    (xdc_Char)0x75,  /* [5459] */
    (xdc_Char)0x6e,  /* [5460] */
    (xdc_Char)0x63,  /* [5461] */
    (xdc_Char)0x3a,  /* [5462] */
    (xdc_Char)0x20,  /* [5463] */
    (xdc_Char)0x30,  /* [5464] */
    (xdc_Char)0x78,  /* [5465] */
    (xdc_Char)0x25,  /* [5466] */
    (xdc_Char)0x78,  /* [5467] */
    (xdc_Char)0x0,  /* [5468] */
    (xdc_Char)0x4c,  /* [5469] */
    (xdc_Char)0x4d,  /* [5470] */
    (xdc_Char)0x5f,  /* [5471] */
    (xdc_Char)0x79,  /* [5472] */
    (xdc_Char)0x69,  /* [5473] */
    (xdc_Char)0x65,  /* [5474] */
    (xdc_Char)0x6c,  /* [5475] */
    (xdc_Char)0x64,  /* [5476] */
    (xdc_Char)0x3a,  /* [5477] */
    (xdc_Char)0x20,  /* [5478] */
    (xdc_Char)0x74,  /* [5479] */
    (xdc_Char)0x73,  /* [5480] */
    (xdc_Char)0x6b,  /* [5481] */
    (xdc_Char)0x3a,  /* [5482] */
    (xdc_Char)0x20,  /* [5483] */
    (xdc_Char)0x30,  /* [5484] */
    (xdc_Char)0x78,  /* [5485] */
    (xdc_Char)0x25,  /* [5486] */
    (xdc_Char)0x78,  /* [5487] */
    (xdc_Char)0x2c,  /* [5488] */
    (xdc_Char)0x20,  /* [5489] */
    (xdc_Char)0x66,  /* [5490] */
    (xdc_Char)0x75,  /* [5491] */
    (xdc_Char)0x6e,  /* [5492] */
    (xdc_Char)0x63,  /* [5493] */
    (xdc_Char)0x3a,  /* [5494] */
    (xdc_Char)0x20,  /* [5495] */
    (xdc_Char)0x30,  /* [5496] */
    (xdc_Char)0x78,  /* [5497] */
    (xdc_Char)0x25,  /* [5498] */
    (xdc_Char)0x78,  /* [5499] */
    (xdc_Char)0x2c,  /* [5500] */
    (xdc_Char)0x20,  /* [5501] */
    (xdc_Char)0x63,  /* [5502] */
    (xdc_Char)0x75,  /* [5503] */
    (xdc_Char)0x72,  /* [5504] */
    (xdc_Char)0x72,  /* [5505] */
    (xdc_Char)0x54,  /* [5506] */
    (xdc_Char)0x68,  /* [5507] */
    (xdc_Char)0x72,  /* [5508] */
    (xdc_Char)0x65,  /* [5509] */
    (xdc_Char)0x61,  /* [5510] */
    (xdc_Char)0x64,  /* [5511] */
    (xdc_Char)0x3a,  /* [5512] */
    (xdc_Char)0x20,  /* [5513] */
    (xdc_Char)0x25,  /* [5514] */
    (xdc_Char)0x64,  /* [5515] */
    (xdc_Char)0x0,  /* [5516] */
    (xdc_Char)0x4c,  /* [5517] */
    (xdc_Char)0x4d,  /* [5518] */
    (xdc_Char)0x5f,  /* [5519] */
    (xdc_Char)0x73,  /* [5520] */
    (xdc_Char)0x65,  /* [5521] */
    (xdc_Char)0x74,  /* [5522] */
    (xdc_Char)0x50,  /* [5523] */
    (xdc_Char)0x72,  /* [5524] */
    (xdc_Char)0x69,  /* [5525] */
    (xdc_Char)0x3a,  /* [5526] */
    (xdc_Char)0x20,  /* [5527] */
    (xdc_Char)0x74,  /* [5528] */
    (xdc_Char)0x73,  /* [5529] */
    (xdc_Char)0x6b,  /* [5530] */
    (xdc_Char)0x3a,  /* [5531] */
    (xdc_Char)0x20,  /* [5532] */
    (xdc_Char)0x30,  /* [5533] */
    (xdc_Char)0x78,  /* [5534] */
    (xdc_Char)0x25,  /* [5535] */
    (xdc_Char)0x78,  /* [5536] */
    (xdc_Char)0x2c,  /* [5537] */
    (xdc_Char)0x20,  /* [5538] */
    (xdc_Char)0x66,  /* [5539] */
    (xdc_Char)0x75,  /* [5540] */
    (xdc_Char)0x6e,  /* [5541] */
    (xdc_Char)0x63,  /* [5542] */
    (xdc_Char)0x3a,  /* [5543] */
    (xdc_Char)0x20,  /* [5544] */
    (xdc_Char)0x30,  /* [5545] */
    (xdc_Char)0x78,  /* [5546] */
    (xdc_Char)0x25,  /* [5547] */
    (xdc_Char)0x78,  /* [5548] */
    (xdc_Char)0x2c,  /* [5549] */
    (xdc_Char)0x20,  /* [5550] */
    (xdc_Char)0x6f,  /* [5551] */
    (xdc_Char)0x6c,  /* [5552] */
    (xdc_Char)0x64,  /* [5553] */
    (xdc_Char)0x50,  /* [5554] */
    (xdc_Char)0x72,  /* [5555] */
    (xdc_Char)0x69,  /* [5556] */
    (xdc_Char)0x3a,  /* [5557] */
    (xdc_Char)0x20,  /* [5558] */
    (xdc_Char)0x25,  /* [5559] */
    (xdc_Char)0x64,  /* [5560] */
    (xdc_Char)0x2c,  /* [5561] */
    (xdc_Char)0x20,  /* [5562] */
    (xdc_Char)0x6e,  /* [5563] */
    (xdc_Char)0x65,  /* [5564] */
    (xdc_Char)0x77,  /* [5565] */
    (xdc_Char)0x50,  /* [5566] */
    (xdc_Char)0x72,  /* [5567] */
    (xdc_Char)0x69,  /* [5568] */
    (xdc_Char)0x20,  /* [5569] */
    (xdc_Char)0x25,  /* [5570] */
    (xdc_Char)0x64,  /* [5571] */
    (xdc_Char)0x0,  /* [5572] */
    (xdc_Char)0x4c,  /* [5573] */
    (xdc_Char)0x44,  /* [5574] */
    (xdc_Char)0x5f,  /* [5575] */
    (xdc_Char)0x65,  /* [5576] */
    (xdc_Char)0x78,  /* [5577] */
    (xdc_Char)0x69,  /* [5578] */
    (xdc_Char)0x74,  /* [5579] */
    (xdc_Char)0x3a,  /* [5580] */
    (xdc_Char)0x20,  /* [5581] */
    (xdc_Char)0x74,  /* [5582] */
    (xdc_Char)0x73,  /* [5583] */
    (xdc_Char)0x6b,  /* [5584] */
    (xdc_Char)0x3a,  /* [5585] */
    (xdc_Char)0x20,  /* [5586] */
    (xdc_Char)0x30,  /* [5587] */
    (xdc_Char)0x78,  /* [5588] */
    (xdc_Char)0x25,  /* [5589] */
    (xdc_Char)0x78,  /* [5590] */
    (xdc_Char)0x2c,  /* [5591] */
    (xdc_Char)0x20,  /* [5592] */
    (xdc_Char)0x66,  /* [5593] */
    (xdc_Char)0x75,  /* [5594] */
    (xdc_Char)0x6e,  /* [5595] */
    (xdc_Char)0x63,  /* [5596] */
    (xdc_Char)0x3a,  /* [5597] */
    (xdc_Char)0x20,  /* [5598] */
    (xdc_Char)0x30,  /* [5599] */
    (xdc_Char)0x78,  /* [5600] */
    (xdc_Char)0x25,  /* [5601] */
    (xdc_Char)0x78,  /* [5602] */
    (xdc_Char)0x0,  /* [5603] */
    (xdc_Char)0x4c,  /* [5604] */
    (xdc_Char)0x4d,  /* [5605] */
    (xdc_Char)0x5f,  /* [5606] */
    (xdc_Char)0x73,  /* [5607] */
    (xdc_Char)0x65,  /* [5608] */
    (xdc_Char)0x74,  /* [5609] */
    (xdc_Char)0x41,  /* [5610] */
    (xdc_Char)0x66,  /* [5611] */
    (xdc_Char)0x66,  /* [5612] */
    (xdc_Char)0x69,  /* [5613] */
    (xdc_Char)0x6e,  /* [5614] */
    (xdc_Char)0x69,  /* [5615] */
    (xdc_Char)0x74,  /* [5616] */
    (xdc_Char)0x79,  /* [5617] */
    (xdc_Char)0x3a,  /* [5618] */
    (xdc_Char)0x20,  /* [5619] */
    (xdc_Char)0x74,  /* [5620] */
    (xdc_Char)0x73,  /* [5621] */
    (xdc_Char)0x6b,  /* [5622] */
    (xdc_Char)0x3a,  /* [5623] */
    (xdc_Char)0x20,  /* [5624] */
    (xdc_Char)0x30,  /* [5625] */
    (xdc_Char)0x78,  /* [5626] */
    (xdc_Char)0x25,  /* [5627] */
    (xdc_Char)0x78,  /* [5628] */
    (xdc_Char)0x2c,  /* [5629] */
    (xdc_Char)0x20,  /* [5630] */
    (xdc_Char)0x66,  /* [5631] */
    (xdc_Char)0x75,  /* [5632] */
    (xdc_Char)0x6e,  /* [5633] */
    (xdc_Char)0x63,  /* [5634] */
    (xdc_Char)0x3a,  /* [5635] */
    (xdc_Char)0x20,  /* [5636] */
    (xdc_Char)0x30,  /* [5637] */
    (xdc_Char)0x78,  /* [5638] */
    (xdc_Char)0x25,  /* [5639] */
    (xdc_Char)0x78,  /* [5640] */
    (xdc_Char)0x2c,  /* [5641] */
    (xdc_Char)0x20,  /* [5642] */
    (xdc_Char)0x6f,  /* [5643] */
    (xdc_Char)0x6c,  /* [5644] */
    (xdc_Char)0x64,  /* [5645] */
    (xdc_Char)0x43,  /* [5646] */
    (xdc_Char)0x6f,  /* [5647] */
    (xdc_Char)0x72,  /* [5648] */
    (xdc_Char)0x65,  /* [5649] */
    (xdc_Char)0x3a,  /* [5650] */
    (xdc_Char)0x20,  /* [5651] */
    (xdc_Char)0x25,  /* [5652] */
    (xdc_Char)0x64,  /* [5653] */
    (xdc_Char)0x2c,  /* [5654] */
    (xdc_Char)0x20,  /* [5655] */
    (xdc_Char)0x6f,  /* [5656] */
    (xdc_Char)0x6c,  /* [5657] */
    (xdc_Char)0x64,  /* [5658] */
    (xdc_Char)0x41,  /* [5659] */
    (xdc_Char)0x66,  /* [5660] */
    (xdc_Char)0x66,  /* [5661] */
    (xdc_Char)0x69,  /* [5662] */
    (xdc_Char)0x6e,  /* [5663] */
    (xdc_Char)0x69,  /* [5664] */
    (xdc_Char)0x74,  /* [5665] */
    (xdc_Char)0x79,  /* [5666] */
    (xdc_Char)0x20,  /* [5667] */
    (xdc_Char)0x25,  /* [5668] */
    (xdc_Char)0x64,  /* [5669] */
    (xdc_Char)0x2c,  /* [5670] */
    (xdc_Char)0x20,  /* [5671] */
    (xdc_Char)0x6e,  /* [5672] */
    (xdc_Char)0x65,  /* [5673] */
    (xdc_Char)0x77,  /* [5674] */
    (xdc_Char)0x41,  /* [5675] */
    (xdc_Char)0x66,  /* [5676] */
    (xdc_Char)0x66,  /* [5677] */
    (xdc_Char)0x69,  /* [5678] */
    (xdc_Char)0x6e,  /* [5679] */
    (xdc_Char)0x69,  /* [5680] */
    (xdc_Char)0x74,  /* [5681] */
    (xdc_Char)0x79,  /* [5682] */
    (xdc_Char)0x20,  /* [5683] */
    (xdc_Char)0x25,  /* [5684] */
    (xdc_Char)0x64,  /* [5685] */
    (xdc_Char)0x0,  /* [5686] */
    (xdc_Char)0x4c,  /* [5687] */
    (xdc_Char)0x44,  /* [5688] */
    (xdc_Char)0x5f,  /* [5689] */
    (xdc_Char)0x73,  /* [5690] */
    (xdc_Char)0x63,  /* [5691] */
    (xdc_Char)0x68,  /* [5692] */
    (xdc_Char)0x65,  /* [5693] */
    (xdc_Char)0x64,  /* [5694] */
    (xdc_Char)0x75,  /* [5695] */
    (xdc_Char)0x6c,  /* [5696] */
    (xdc_Char)0x65,  /* [5697] */
    (xdc_Char)0x3a,  /* [5698] */
    (xdc_Char)0x20,  /* [5699] */
    (xdc_Char)0x63,  /* [5700] */
    (xdc_Char)0x6f,  /* [5701] */
    (xdc_Char)0x72,  /* [5702] */
    (xdc_Char)0x65,  /* [5703] */
    (xdc_Char)0x49,  /* [5704] */
    (xdc_Char)0x64,  /* [5705] */
    (xdc_Char)0x3a,  /* [5706] */
    (xdc_Char)0x20,  /* [5707] */
    (xdc_Char)0x25,  /* [5708] */
    (xdc_Char)0x64,  /* [5709] */
    (xdc_Char)0x2c,  /* [5710] */
    (xdc_Char)0x20,  /* [5711] */
    (xdc_Char)0x77,  /* [5712] */
    (xdc_Char)0x6f,  /* [5713] */
    (xdc_Char)0x72,  /* [5714] */
    (xdc_Char)0x6b,  /* [5715] */
    (xdc_Char)0x46,  /* [5716] */
    (xdc_Char)0x6c,  /* [5717] */
    (xdc_Char)0x61,  /* [5718] */
    (xdc_Char)0x67,  /* [5719] */
    (xdc_Char)0x3a,  /* [5720] */
    (xdc_Char)0x20,  /* [5721] */
    (xdc_Char)0x25,  /* [5722] */
    (xdc_Char)0x64,  /* [5723] */
    (xdc_Char)0x2c,  /* [5724] */
    (xdc_Char)0x20,  /* [5725] */
    (xdc_Char)0x63,  /* [5726] */
    (xdc_Char)0x75,  /* [5727] */
    (xdc_Char)0x72,  /* [5728] */
    (xdc_Char)0x53,  /* [5729] */
    (xdc_Char)0x65,  /* [5730] */
    (xdc_Char)0x74,  /* [5731] */
    (xdc_Char)0x4c,  /* [5732] */
    (xdc_Char)0x6f,  /* [5733] */
    (xdc_Char)0x63,  /* [5734] */
    (xdc_Char)0x61,  /* [5735] */
    (xdc_Char)0x6c,  /* [5736] */
    (xdc_Char)0x3a,  /* [5737] */
    (xdc_Char)0x20,  /* [5738] */
    (xdc_Char)0x25,  /* [5739] */
    (xdc_Char)0x64,  /* [5740] */
    (xdc_Char)0x2c,  /* [5741] */
    (xdc_Char)0x20,  /* [5742] */
    (xdc_Char)0x63,  /* [5743] */
    (xdc_Char)0x75,  /* [5744] */
    (xdc_Char)0x72,  /* [5745] */
    (xdc_Char)0x53,  /* [5746] */
    (xdc_Char)0x65,  /* [5747] */
    (xdc_Char)0x74,  /* [5748] */
    (xdc_Char)0x58,  /* [5749] */
    (xdc_Char)0x3a,  /* [5750] */
    (xdc_Char)0x20,  /* [5751] */
    (xdc_Char)0x25,  /* [5752] */
    (xdc_Char)0x64,  /* [5753] */
    (xdc_Char)0x2c,  /* [5754] */
    (xdc_Char)0x20,  /* [5755] */
    (xdc_Char)0x63,  /* [5756] */
    (xdc_Char)0x75,  /* [5757] */
    (xdc_Char)0x72,  /* [5758] */
    (xdc_Char)0x4d,  /* [5759] */
    (xdc_Char)0x61,  /* [5760] */
    (xdc_Char)0x73,  /* [5761] */
    (xdc_Char)0x6b,  /* [5762] */
    (xdc_Char)0x4c,  /* [5763] */
    (xdc_Char)0x6f,  /* [5764] */
    (xdc_Char)0x63,  /* [5765] */
    (xdc_Char)0x61,  /* [5766] */
    (xdc_Char)0x6c,  /* [5767] */
    (xdc_Char)0x3a,  /* [5768] */
    (xdc_Char)0x20,  /* [5769] */
    (xdc_Char)0x25,  /* [5770] */
    (xdc_Char)0x64,  /* [5771] */
    (xdc_Char)0x0,  /* [5772] */
    (xdc_Char)0x4c,  /* [5773] */
    (xdc_Char)0x44,  /* [5774] */
    (xdc_Char)0x5f,  /* [5775] */
    (xdc_Char)0x6e,  /* [5776] */
    (xdc_Char)0x6f,  /* [5777] */
    (xdc_Char)0x57,  /* [5778] */
    (xdc_Char)0x6f,  /* [5779] */
    (xdc_Char)0x72,  /* [5780] */
    (xdc_Char)0x6b,  /* [5781] */
    (xdc_Char)0x3a,  /* [5782] */
    (xdc_Char)0x20,  /* [5783] */
    (xdc_Char)0x63,  /* [5784] */
    (xdc_Char)0x6f,  /* [5785] */
    (xdc_Char)0x72,  /* [5786] */
    (xdc_Char)0x65,  /* [5787] */
    (xdc_Char)0x49,  /* [5788] */
    (xdc_Char)0x64,  /* [5789] */
    (xdc_Char)0x3a,  /* [5790] */
    (xdc_Char)0x20,  /* [5791] */
    (xdc_Char)0x25,  /* [5792] */
    (xdc_Char)0x64,  /* [5793] */
    (xdc_Char)0x2c,  /* [5794] */
    (xdc_Char)0x20,  /* [5795] */
    (xdc_Char)0x63,  /* [5796] */
    (xdc_Char)0x75,  /* [5797] */
    (xdc_Char)0x72,  /* [5798] */
    (xdc_Char)0x53,  /* [5799] */
    (xdc_Char)0x65,  /* [5800] */
    (xdc_Char)0x74,  /* [5801] */
    (xdc_Char)0x4c,  /* [5802] */
    (xdc_Char)0x6f,  /* [5803] */
    (xdc_Char)0x63,  /* [5804] */
    (xdc_Char)0x61,  /* [5805] */
    (xdc_Char)0x6c,  /* [5806] */
    (xdc_Char)0x3a,  /* [5807] */
    (xdc_Char)0x20,  /* [5808] */
    (xdc_Char)0x25,  /* [5809] */
    (xdc_Char)0x64,  /* [5810] */
    (xdc_Char)0x2c,  /* [5811] */
    (xdc_Char)0x20,  /* [5812] */
    (xdc_Char)0x63,  /* [5813] */
    (xdc_Char)0x75,  /* [5814] */
    (xdc_Char)0x72,  /* [5815] */
    (xdc_Char)0x53,  /* [5816] */
    (xdc_Char)0x65,  /* [5817] */
    (xdc_Char)0x74,  /* [5818] */
    (xdc_Char)0x58,  /* [5819] */
    (xdc_Char)0x3a,  /* [5820] */
    (xdc_Char)0x20,  /* [5821] */
    (xdc_Char)0x25,  /* [5822] */
    (xdc_Char)0x64,  /* [5823] */
    (xdc_Char)0x2c,  /* [5824] */
    (xdc_Char)0x20,  /* [5825] */
    (xdc_Char)0x63,  /* [5826] */
    (xdc_Char)0x75,  /* [5827] */
    (xdc_Char)0x72,  /* [5828] */
    (xdc_Char)0x4d,  /* [5829] */
    (xdc_Char)0x61,  /* [5830] */
    (xdc_Char)0x73,  /* [5831] */
    (xdc_Char)0x6b,  /* [5832] */
    (xdc_Char)0x4c,  /* [5833] */
    (xdc_Char)0x6f,  /* [5834] */
    (xdc_Char)0x63,  /* [5835] */
    (xdc_Char)0x61,  /* [5836] */
    (xdc_Char)0x6c,  /* [5837] */
    (xdc_Char)0x3a,  /* [5838] */
    (xdc_Char)0x20,  /* [5839] */
    (xdc_Char)0x25,  /* [5840] */
    (xdc_Char)0x64,  /* [5841] */
    (xdc_Char)0x0,  /* [5842] */
    (xdc_Char)0x4c,  /* [5843] */
    (xdc_Char)0x4d,  /* [5844] */
    (xdc_Char)0x5f,  /* [5845] */
    (xdc_Char)0x62,  /* [5846] */
    (xdc_Char)0x65,  /* [5847] */
    (xdc_Char)0x67,  /* [5848] */
    (xdc_Char)0x69,  /* [5849] */
    (xdc_Char)0x6e,  /* [5850] */
    (xdc_Char)0x3a,  /* [5851] */
    (xdc_Char)0x20,  /* [5852] */
    (xdc_Char)0x68,  /* [5853] */
    (xdc_Char)0x77,  /* [5854] */
    (xdc_Char)0x69,  /* [5855] */
    (xdc_Char)0x3a,  /* [5856] */
    (xdc_Char)0x20,  /* [5857] */
    (xdc_Char)0x30,  /* [5858] */
    (xdc_Char)0x78,  /* [5859] */
    (xdc_Char)0x25,  /* [5860] */
    (xdc_Char)0x78,  /* [5861] */
    (xdc_Char)0x2c,  /* [5862] */
    (xdc_Char)0x20,  /* [5863] */
    (xdc_Char)0x66,  /* [5864] */
    (xdc_Char)0x75,  /* [5865] */
    (xdc_Char)0x6e,  /* [5866] */
    (xdc_Char)0x63,  /* [5867] */
    (xdc_Char)0x3a,  /* [5868] */
    (xdc_Char)0x20,  /* [5869] */
    (xdc_Char)0x30,  /* [5870] */
    (xdc_Char)0x78,  /* [5871] */
    (xdc_Char)0x25,  /* [5872] */
    (xdc_Char)0x78,  /* [5873] */
    (xdc_Char)0x2c,  /* [5874] */
    (xdc_Char)0x20,  /* [5875] */
    (xdc_Char)0x70,  /* [5876] */
    (xdc_Char)0x72,  /* [5877] */
    (xdc_Char)0x65,  /* [5878] */
    (xdc_Char)0x54,  /* [5879] */
    (xdc_Char)0x68,  /* [5880] */
    (xdc_Char)0x72,  /* [5881] */
    (xdc_Char)0x65,  /* [5882] */
    (xdc_Char)0x61,  /* [5883] */
    (xdc_Char)0x64,  /* [5884] */
    (xdc_Char)0x3a,  /* [5885] */
    (xdc_Char)0x20,  /* [5886] */
    (xdc_Char)0x25,  /* [5887] */
    (xdc_Char)0x64,  /* [5888] */
    (xdc_Char)0x2c,  /* [5889] */
    (xdc_Char)0x20,  /* [5890] */
    (xdc_Char)0x69,  /* [5891] */
    (xdc_Char)0x6e,  /* [5892] */
    (xdc_Char)0x74,  /* [5893] */
    (xdc_Char)0x4e,  /* [5894] */
    (xdc_Char)0x75,  /* [5895] */
    (xdc_Char)0x6d,  /* [5896] */
    (xdc_Char)0x3a,  /* [5897] */
    (xdc_Char)0x20,  /* [5898] */
    (xdc_Char)0x25,  /* [5899] */
    (xdc_Char)0x64,  /* [5900] */
    (xdc_Char)0x2c,  /* [5901] */
    (xdc_Char)0x20,  /* [5902] */
    (xdc_Char)0x69,  /* [5903] */
    (xdc_Char)0x72,  /* [5904] */
    (xdc_Char)0x70,  /* [5905] */
    (xdc_Char)0x3a,  /* [5906] */
    (xdc_Char)0x20,  /* [5907] */
    (xdc_Char)0x30,  /* [5908] */
    (xdc_Char)0x78,  /* [5909] */
    (xdc_Char)0x25,  /* [5910] */
    (xdc_Char)0x78,  /* [5911] */
    (xdc_Char)0x0,  /* [5912] */
    (xdc_Char)0x4c,  /* [5913] */
    (xdc_Char)0x44,  /* [5914] */
    (xdc_Char)0x5f,  /* [5915] */
    (xdc_Char)0x65,  /* [5916] */
    (xdc_Char)0x6e,  /* [5917] */
    (xdc_Char)0x64,  /* [5918] */
    (xdc_Char)0x3a,  /* [5919] */
    (xdc_Char)0x20,  /* [5920] */
    (xdc_Char)0x68,  /* [5921] */
    (xdc_Char)0x77,  /* [5922] */
    (xdc_Char)0x69,  /* [5923] */
    (xdc_Char)0x3a,  /* [5924] */
    (xdc_Char)0x20,  /* [5925] */
    (xdc_Char)0x30,  /* [5926] */
    (xdc_Char)0x78,  /* [5927] */
    (xdc_Char)0x25,  /* [5928] */
    (xdc_Char)0x78,  /* [5929] */
    (xdc_Char)0x0,  /* [5930] */
    (xdc_Char)0x78,  /* [5931] */
    (xdc_Char)0x64,  /* [5932] */
    (xdc_Char)0x63,  /* [5933] */
    (xdc_Char)0x2e,  /* [5934] */
    (xdc_Char)0x0,  /* [5935] */
    (xdc_Char)0x72,  /* [5936] */
    (xdc_Char)0x75,  /* [5937] */
    (xdc_Char)0x6e,  /* [5938] */
    (xdc_Char)0x74,  /* [5939] */
    (xdc_Char)0x69,  /* [5940] */
    (xdc_Char)0x6d,  /* [5941] */
    (xdc_Char)0x65,  /* [5942] */
    (xdc_Char)0x2e,  /* [5943] */
    (xdc_Char)0x0,  /* [5944] */
    (xdc_Char)0x41,  /* [5945] */
    (xdc_Char)0x73,  /* [5946] */
    (xdc_Char)0x73,  /* [5947] */
    (xdc_Char)0x65,  /* [5948] */
    (xdc_Char)0x72,  /* [5949] */
    (xdc_Char)0x74,  /* [5950] */
    (xdc_Char)0x0,  /* [5951] */
    (xdc_Char)0x43,  /* [5952] */
    (xdc_Char)0x6f,  /* [5953] */
    (xdc_Char)0x72,  /* [5954] */
    (xdc_Char)0x65,  /* [5955] */
    (xdc_Char)0x0,  /* [5956] */
    (xdc_Char)0x44,  /* [5957] */
    (xdc_Char)0x65,  /* [5958] */
    (xdc_Char)0x66,  /* [5959] */
    (xdc_Char)0x61,  /* [5960] */
    (xdc_Char)0x75,  /* [5961] */
    (xdc_Char)0x6c,  /* [5962] */
    (xdc_Char)0x74,  /* [5963] */
    (xdc_Char)0x73,  /* [5964] */
    (xdc_Char)0x0,  /* [5965] */
    (xdc_Char)0x44,  /* [5966] */
    (xdc_Char)0x69,  /* [5967] */
    (xdc_Char)0x61,  /* [5968] */
    (xdc_Char)0x67,  /* [5969] */
    (xdc_Char)0x73,  /* [5970] */
    (xdc_Char)0x0,  /* [5971] */
    (xdc_Char)0x45,  /* [5972] */
    (xdc_Char)0x72,  /* [5973] */
    (xdc_Char)0x72,  /* [5974] */
    (xdc_Char)0x6f,  /* [5975] */
    (xdc_Char)0x72,  /* [5976] */
    (xdc_Char)0x0,  /* [5977] */
    (xdc_Char)0x47,  /* [5978] */
    (xdc_Char)0x61,  /* [5979] */
    (xdc_Char)0x74,  /* [5980] */
    (xdc_Char)0x65,  /* [5981] */
    (xdc_Char)0x0,  /* [5982] */
    (xdc_Char)0x4c,  /* [5983] */
    (xdc_Char)0x6f,  /* [5984] */
    (xdc_Char)0x67,  /* [5985] */
    (xdc_Char)0x0,  /* [5986] */
    (xdc_Char)0x4d,  /* [5987] */
    (xdc_Char)0x61,  /* [5988] */
    (xdc_Char)0x69,  /* [5989] */
    (xdc_Char)0x6e,  /* [5990] */
    (xdc_Char)0x0,  /* [5991] */
    (xdc_Char)0x4d,  /* [5992] */
    (xdc_Char)0x65,  /* [5993] */
    (xdc_Char)0x6d,  /* [5994] */
    (xdc_Char)0x6f,  /* [5995] */
    (xdc_Char)0x72,  /* [5996] */
    (xdc_Char)0x79,  /* [5997] */
    (xdc_Char)0x0,  /* [5998] */
    (xdc_Char)0x52,  /* [5999] */
    (xdc_Char)0x65,  /* [6000] */
    (xdc_Char)0x67,  /* [6001] */
    (xdc_Char)0x69,  /* [6002] */
    (xdc_Char)0x73,  /* [6003] */
    (xdc_Char)0x74,  /* [6004] */
    (xdc_Char)0x72,  /* [6005] */
    (xdc_Char)0x79,  /* [6006] */
    (xdc_Char)0x0,  /* [6007] */
    (xdc_Char)0x53,  /* [6008] */
    (xdc_Char)0x74,  /* [6009] */
    (xdc_Char)0x61,  /* [6010] */
    (xdc_Char)0x72,  /* [6011] */
    (xdc_Char)0x74,  /* [6012] */
    (xdc_Char)0x75,  /* [6013] */
    (xdc_Char)0x70,  /* [6014] */
    (xdc_Char)0x0,  /* [6015] */
    (xdc_Char)0x53,  /* [6016] */
    (xdc_Char)0x79,  /* [6017] */
    (xdc_Char)0x73,  /* [6018] */
    (xdc_Char)0x74,  /* [6019] */
    (xdc_Char)0x65,  /* [6020] */
    (xdc_Char)0x6d,  /* [6021] */
    (xdc_Char)0x0,  /* [6022] */
    (xdc_Char)0x53,  /* [6023] */
    (xdc_Char)0x79,  /* [6024] */
    (xdc_Char)0x73,  /* [6025] */
    (xdc_Char)0x4d,  /* [6026] */
    (xdc_Char)0x69,  /* [6027] */
    (xdc_Char)0x6e,  /* [6028] */
    (xdc_Char)0x0,  /* [6029] */
    (xdc_Char)0x54,  /* [6030] */
    (xdc_Char)0x65,  /* [6031] */
    (xdc_Char)0x78,  /* [6032] */
    (xdc_Char)0x74,  /* [6033] */
    (xdc_Char)0x0,  /* [6034] */
    (xdc_Char)0x74,  /* [6035] */
    (xdc_Char)0x69,  /* [6036] */
    (xdc_Char)0x2e,  /* [6037] */
    (xdc_Char)0x0,  /* [6038] */
    (xdc_Char)0x73,  /* [6039] */
    (xdc_Char)0x79,  /* [6040] */
    (xdc_Char)0x73,  /* [6041] */
    (xdc_Char)0x62,  /* [6042] */
    (xdc_Char)0x69,  /* [6043] */
    (xdc_Char)0x6f,  /* [6044] */
    (xdc_Char)0x73,  /* [6045] */
    (xdc_Char)0x2e,  /* [6046] */
    (xdc_Char)0x0,  /* [6047] */
    (xdc_Char)0x42,  /* [6048] */
    (xdc_Char)0x49,  /* [6049] */
    (xdc_Char)0x4f,  /* [6050] */
    (xdc_Char)0x53,  /* [6051] */
    (xdc_Char)0x0,  /* [6052] */
    (xdc_Char)0x6b,  /* [6053] */
    (xdc_Char)0x6e,  /* [6054] */
    (xdc_Char)0x6c,  /* [6055] */
    (xdc_Char)0x2e,  /* [6056] */
    (xdc_Char)0x0,  /* [6057] */
    (xdc_Char)0x43,  /* [6058] */
    (xdc_Char)0x6c,  /* [6059] */
    (xdc_Char)0x6f,  /* [6060] */
    (xdc_Char)0x63,  /* [6061] */
    (xdc_Char)0x6b,  /* [6062] */
    (xdc_Char)0x0,  /* [6063] */
    (xdc_Char)0x49,  /* [6064] */
    (xdc_Char)0x64,  /* [6065] */
    (xdc_Char)0x6c,  /* [6066] */
    (xdc_Char)0x65,  /* [6067] */
    (xdc_Char)0x0,  /* [6068] */
    (xdc_Char)0x49,  /* [6069] */
    (xdc_Char)0x6e,  /* [6070] */
    (xdc_Char)0x74,  /* [6071] */
    (xdc_Char)0x72,  /* [6072] */
    (xdc_Char)0x69,  /* [6073] */
    (xdc_Char)0x6e,  /* [6074] */
    (xdc_Char)0x73,  /* [6075] */
    (xdc_Char)0x69,  /* [6076] */
    (xdc_Char)0x63,  /* [6077] */
    (xdc_Char)0x73,  /* [6078] */
    (xdc_Char)0x0,  /* [6079] */
    (xdc_Char)0x45,  /* [6080] */
    (xdc_Char)0x76,  /* [6081] */
    (xdc_Char)0x65,  /* [6082] */
    (xdc_Char)0x6e,  /* [6083] */
    (xdc_Char)0x74,  /* [6084] */
    (xdc_Char)0x0,  /* [6085] */
    (xdc_Char)0x4d,  /* [6086] */
    (xdc_Char)0x61,  /* [6087] */
    (xdc_Char)0x69,  /* [6088] */
    (xdc_Char)0x6c,  /* [6089] */
    (xdc_Char)0x62,  /* [6090] */
    (xdc_Char)0x6f,  /* [6091] */
    (xdc_Char)0x78,  /* [6092] */
    (xdc_Char)0x0,  /* [6093] */
    (xdc_Char)0x51,  /* [6094] */
    (xdc_Char)0x75,  /* [6095] */
    (xdc_Char)0x65,  /* [6096] */
    (xdc_Char)0x75,  /* [6097] */
    (xdc_Char)0x65,  /* [6098] */
    (xdc_Char)0x0,  /* [6099] */
    (xdc_Char)0x53,  /* [6100] */
    (xdc_Char)0x65,  /* [6101] */
    (xdc_Char)0x6d,  /* [6102] */
    (xdc_Char)0x61,  /* [6103] */
    (xdc_Char)0x70,  /* [6104] */
    (xdc_Char)0x68,  /* [6105] */
    (xdc_Char)0x6f,  /* [6106] */
    (xdc_Char)0x72,  /* [6107] */
    (xdc_Char)0x65,  /* [6108] */
    (xdc_Char)0x0,  /* [6109] */
    (xdc_Char)0x53,  /* [6110] */
    (xdc_Char)0x77,  /* [6111] */
    (xdc_Char)0x69,  /* [6112] */
    (xdc_Char)0x0,  /* [6113] */
    (xdc_Char)0x54,  /* [6114] */
    (xdc_Char)0x61,  /* [6115] */
    (xdc_Char)0x73,  /* [6116] */
    (xdc_Char)0x6b,  /* [6117] */
    (xdc_Char)0x0,  /* [6118] */
    (xdc_Char)0x66,  /* [6119] */
    (xdc_Char)0x61,  /* [6120] */
    (xdc_Char)0x6d,  /* [6121] */
    (xdc_Char)0x69,  /* [6122] */
    (xdc_Char)0x6c,  /* [6123] */
    (xdc_Char)0x79,  /* [6124] */
    (xdc_Char)0x2e,  /* [6125] */
    (xdc_Char)0x0,  /* [6126] */
    (xdc_Char)0x61,  /* [6127] */
    (xdc_Char)0x72,  /* [6128] */
    (xdc_Char)0x6d,  /* [6129] */
    (xdc_Char)0x2e,  /* [6130] */
    (xdc_Char)0x0,  /* [6131] */
    (xdc_Char)0x6d,  /* [6132] */
    (xdc_Char)0x33,  /* [6133] */
    (xdc_Char)0x2e,  /* [6134] */
    (xdc_Char)0x0,  /* [6135] */
    (xdc_Char)0x48,  /* [6136] */
    (xdc_Char)0x77,  /* [6137] */
    (xdc_Char)0x69,  /* [6138] */
    (xdc_Char)0x0,  /* [6139] */
    (xdc_Char)0x49,  /* [6140] */
    (xdc_Char)0x6e,  /* [6141] */
    (xdc_Char)0x74,  /* [6142] */
    (xdc_Char)0x72,  /* [6143] */
    (xdc_Char)0x69,  /* [6144] */
    (xdc_Char)0x6e,  /* [6145] */
    (xdc_Char)0x73,  /* [6146] */
    (xdc_Char)0x69,  /* [6147] */
    (xdc_Char)0x63,  /* [6148] */
    (xdc_Char)0x73,  /* [6149] */
    (xdc_Char)0x53,  /* [6150] */
    (xdc_Char)0x75,  /* [6151] */
    (xdc_Char)0x70,  /* [6152] */
    (xdc_Char)0x70,  /* [6153] */
    (xdc_Char)0x6f,  /* [6154] */
    (xdc_Char)0x72,  /* [6155] */
    (xdc_Char)0x74,  /* [6156] */
    (xdc_Char)0x0,  /* [6157] */
    (xdc_Char)0x54,  /* [6158] */
    (xdc_Char)0x61,  /* [6159] */
    (xdc_Char)0x73,  /* [6160] */
    (xdc_Char)0x6b,  /* [6161] */
    (xdc_Char)0x53,  /* [6162] */
    (xdc_Char)0x75,  /* [6163] */
    (xdc_Char)0x70,  /* [6164] */
    (xdc_Char)0x70,  /* [6165] */
    (xdc_Char)0x6f,  /* [6166] */
    (xdc_Char)0x72,  /* [6167] */
    (xdc_Char)0x74,  /* [6168] */
    (xdc_Char)0x0,  /* [6169] */
    (xdc_Char)0x54,  /* [6170] */
    (xdc_Char)0x69,  /* [6171] */
    (xdc_Char)0x6d,  /* [6172] */
    (xdc_Char)0x65,  /* [6173] */
    (xdc_Char)0x72,  /* [6174] */
    (xdc_Char)0x0,  /* [6175] */
    (xdc_Char)0x68,  /* [6176] */
    (xdc_Char)0x65,  /* [6177] */
    (xdc_Char)0x61,  /* [6178] */
    (xdc_Char)0x70,  /* [6179] */
    (xdc_Char)0x73,  /* [6180] */
    (xdc_Char)0x2e,  /* [6181] */
    (xdc_Char)0x0,  /* [6182] */
    (xdc_Char)0x48,  /* [6183] */
    (xdc_Char)0x65,  /* [6184] */
    (xdc_Char)0x61,  /* [6185] */
    (xdc_Char)0x70,  /* [6186] */
    (xdc_Char)0x4d,  /* [6187] */
    (xdc_Char)0x65,  /* [6188] */
    (xdc_Char)0x6d,  /* [6189] */
    (xdc_Char)0x0,  /* [6190] */
    (xdc_Char)0x68,  /* [6191] */
    (xdc_Char)0x61,  /* [6192] */
    (xdc_Char)0x6c,  /* [6193] */
    (xdc_Char)0x2e,  /* [6194] */
    (xdc_Char)0x0,  /* [6195] */
    (xdc_Char)0x6c,  /* [6196] */
    (xdc_Char)0x6d,  /* [6197] */
    (xdc_Char)0x34,  /* [6198] */
    (xdc_Char)0x2e,  /* [6199] */
    (xdc_Char)0x0,  /* [6200] */
    (xdc_Char)0x67,  /* [6201] */
    (xdc_Char)0x61,  /* [6202] */
    (xdc_Char)0x74,  /* [6203] */
    (xdc_Char)0x65,  /* [6204] */
    (xdc_Char)0x73,  /* [6205] */
    (xdc_Char)0x2e,  /* [6206] */
    (xdc_Char)0x0,  /* [6207] */
    (xdc_Char)0x47,  /* [6208] */
    (xdc_Char)0x61,  /* [6209] */
    (xdc_Char)0x74,  /* [6210] */
    (xdc_Char)0x65,  /* [6211] */
    (xdc_Char)0x48,  /* [6212] */
    (xdc_Char)0x77,  /* [6213] */
    (xdc_Char)0x69,  /* [6214] */
    (xdc_Char)0x0,  /* [6215] */
    (xdc_Char)0x47,  /* [6216] */
    (xdc_Char)0x61,  /* [6217] */
    (xdc_Char)0x74,  /* [6218] */
    (xdc_Char)0x65,  /* [6219] */
    (xdc_Char)0x4d,  /* [6220] */
    (xdc_Char)0x75,  /* [6221] */
    (xdc_Char)0x74,  /* [6222] */
    (xdc_Char)0x65,  /* [6223] */
    (xdc_Char)0x78,  /* [6224] */
    (xdc_Char)0x0,  /* [6225] */
    (xdc_Char)0x74,  /* [6226] */
    (xdc_Char)0x69,  /* [6227] */
    (xdc_Char)0x2e,  /* [6228] */
    (xdc_Char)0x73,  /* [6229] */
    (xdc_Char)0x79,  /* [6230] */
    (xdc_Char)0x73,  /* [6231] */
    (xdc_Char)0x62,  /* [6232] */
    (xdc_Char)0x69,  /* [6233] */
    (xdc_Char)0x6f,  /* [6234] */
    (xdc_Char)0x73,  /* [6235] */
    (xdc_Char)0x2e,  /* [6236] */
    (xdc_Char)0x6b,  /* [6237] */
    (xdc_Char)0x6e,  /* [6238] */
    (xdc_Char)0x6c,  /* [6239] */
    (xdc_Char)0x2e,  /* [6240] */
    (xdc_Char)0x54,  /* [6241] */
    (xdc_Char)0x61,  /* [6242] */
    (xdc_Char)0x73,  /* [6243] */
    (xdc_Char)0x6b,  /* [6244] */
    (xdc_Char)0x2e,  /* [6245] */
    (xdc_Char)0x49,  /* [6246] */
    (xdc_Char)0x64,  /* [6247] */
    (xdc_Char)0x6c,  /* [6248] */
    (xdc_Char)0x65,  /* [6249] */
    (xdc_Char)0x54,  /* [6250] */
    (xdc_Char)0x61,  /* [6251] */
    (xdc_Char)0x73,  /* [6252] */
    (xdc_Char)0x6b,  /* [6253] */
    (xdc_Char)0x0,  /* [6254] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[45] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x172b,  /* left */
        (xdc_Bits16)0x1730,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1739,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1740,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1745,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x174e,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1754,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x175a,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x175f,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1763,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1768,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x176f,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1778,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1780,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1787,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x178e,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x1793,  /* left */
        (xdc_Bits16)0x1797,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x17a0,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x17a5,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x17aa,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x17b0,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x17b5,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x17c0,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x17c6,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x17ce,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x17d4,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x17de,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x17e2,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x17e7,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x17ef,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x17f4,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x17f8,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x17fc,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x180e,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x181a,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1820,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1827,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x182f,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x17f8,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x181a,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1834,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x181a,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1839,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x1840,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x1848,  /* right */
    },  /* [44] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x186f;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x2d;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_BIOS_RtsGateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_BIOS_RtsGateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_BIOS_RtsGateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_m3_Hwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_m3_Hwi___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_IHwi_Params), __eb);
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_HwiProxy_Args__create __args;
    __args.intNum = intNum;
    __args.hwiFxn = hwiFxn;
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_hal_Hwi_HwiProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Hwi_HwiProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_m3_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_lm4_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_lm4_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_hal_Timer_TimerProxy_Handle ti_sysbios_hal_Timer_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Timer_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_hal_Timer_TimerProxy_Handle)ti_sysbios_hal_Timer_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Timer_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_hal_Timer_TimerProxy_delete(ti_sysbios_hal_Timer_TimerProxy_Handle *instp)
{
    ti_sysbios_hal_Timer_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Timer_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCurrentTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_lm4_Timer_getCurrentTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_heaps_HeapMem_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_m3_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_m3_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_knl_Clock_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_knl_Clock_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_knl_Clock_TimerProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_m3_Timer_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_knl_Clock_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_m3_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_m3_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Timer_getMaxTicks((ti_sysbios_family_arm_m3_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_m3_Timer_setNextTick((ti_sysbios_family_arm_m3_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_m3_Timer_start((ti_sysbios_family_arm_m3_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_m3_Timer_stop((ti_sysbios_family_arm_m3_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_m3_Timer_setPeriod((ti_sysbios_family_arm_m3_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_m3_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_m3_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Timer_getPeriod((ti_sysbios_family_arm_m3_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Timer_getCount((ti_sysbios_family_arm_m3_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_m3_Timer_getFreq((ti_sysbios_family_arm_m3_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Timer_getFunc((ti_sysbios_family_arm_m3_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Timer_setFunc((ti_sysbios_family_arm_m3_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_m3_Timer_trigger((ti_sysbios_family_arm_m3_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Timer_getExpiredCounts((ti_sysbios_family_arm_m3_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_m3_Timer_getExpiredTicks((ti_sysbios_family_arm_m3_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_m3_Timer_getCurrentTick((ti_sysbios_family_arm_m3_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)xdc_runtime_Main_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Main_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    xdc_runtime_Main_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(__obj, __osz, __aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IHeap_Params), __eb);
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)xdc_runtime_Memory_HeapProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Memory_HeapProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    xdc_runtime_Memory_HeapProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)xdc_runtime_System_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_System_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    xdc_runtime_System_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== ti.sysbios.family.arm.lm4.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_lm4_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_lm4_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_lm4_Timer___S1) - sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Timer___S1) - sizeof(ti_sysbios_family_arm_m3_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Mailbox OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Mailbox_Object2__ s0; char c; } ti_sysbios_knl_Mailbox___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__DESC__C, ".const:ti_sysbios_knl_Mailbox_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Mailbox_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Mailbox_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Mailbox___S1) - sizeof(ti_sysbios_knl_Mailbox_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Mailbox_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Mailbox_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Mailbox_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module __mod, const xdc_runtime_IHeap_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IHeap_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IHeap_Params), __eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module __mod, const xdc_runtime_IGateProvider_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IGateProvider_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IGateProvider_Params), __eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.lm4.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_lm4_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_lm4_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32809;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_lm4_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)ti_sysbios_family_arm_lm4_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_lm4_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_lm4_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_lm4_Timer_Args__create *__args = __aa;
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    ti_sysbios_family_arm_lm4_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_lm4_Timer_Handle ti_sysbios_family_arm_lm4_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    ti_sysbios_family_arm_lm4_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_lm4_Timer_construct(ti_sysbios_family_arm_lm4_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_lm4_Timer_destruct(ti_sysbios_family_arm_lm4_Timer_Struct *obj)
{
    ti_sysbios_family_arm_lm4_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, *((ti_sysbios_family_arm_lm4_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_lm4_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_lm4_Timer_delete(ti_sysbios_family_arm_lm4_Timer_Handle *instp)
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_m3_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_m3_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_m3_Hwi_Handle ti_sysbios_family_arm_m3_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_m3_Hwi_construct(ti_sysbios_family_arm_m3_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_m3_Hwi_destruct(ti_sysbios_family_arm_m3_Hwi_Struct *obj)
{
    ti_sysbios_family_arm_m3_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Hwi_delete(ti_sysbios_family_arm_m3_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Timer_Object__ *)ti_sysbios_family_arm_m3_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_m3_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_m3_Timer_Args__create *__args = __aa;
    ti_sysbios_family_arm_m3_Timer_Params __prms;
    ti_sysbios_family_arm_m3_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_m3_Timer_Handle ti_sysbios_family_arm_m3_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_m3_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Timer_Params __prms;
    ti_sysbios_family_arm_m3_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_m3_Timer_construct(ti_sysbios_family_arm_m3_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_m3_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_m3_Timer_destruct(ti_sysbios_family_arm_m3_Timer_Struct *obj)
{
    ti_sysbios_family_arm_m3_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, *((ti_sysbios_family_arm_m3_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Timer_delete(ti_sysbios_family_arm_m3_Timer_Handle *instp)
{
    ti_sysbios_family_arm_m3_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32811;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__ *)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    ti_sysbios_gates_GateHwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32812;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__ *)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    ti_sysbios_gates_GateMutex_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32806;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__ *)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    ti_sysbios_hal_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32807;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__ *)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Timer_Args__create *__args = __aa;
    ti_sysbios_hal_Timer_Params __prms;
    ti_sysbios_hal_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Timer_Handle ti_sysbios_hal_Timer_create( xdc_Int id, ti_sysbios_hal_Timer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Timer_Params __prms;
    ti_sysbios_hal_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Timer_construct(ti_sysbios_hal_Timer_Struct *__obj, xdc_Int id, ti_sysbios_hal_Timer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Timer_destruct(ti_sysbios_hal_Timer_Struct *obj)
{
    ti_sysbios_hal_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Timer_delete(ti_sysbios_hal_Timer_Handle *instp)
{
    ti_sysbios_hal_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__ *)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *__obj, const ti_sysbios_heaps_HeapMem_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapMem_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    ti_sysbios_heaps_HeapMem_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32787;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__ *)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, __args->clockFxn, __args->timeout, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, clockFxn, timeout, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    ti_sysbios_knl_Clock_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32790;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__ *)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Event___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    ti_sysbios_knl_Event_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Mailbox SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Mailbox_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Mailbox_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Mailbox_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Mailbox_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Mailbox_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Mailbox_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Mailbox_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Mailbox_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Mailbox_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Mailbox_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Mailbox_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Mailbox_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Mailbox_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Mailbox_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Mailbox_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Mailbox_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Mailbox_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Mailbox_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Mailbox_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Mailbox_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Mailbox_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32791;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Mailbox_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Mailbox_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Mailbox_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Mailbox_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Mailbox_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Mailbox_Object__ *)ti_sysbios_knl_Mailbox_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Mailbox_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Mailbox_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Mailbox_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Mailbox_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Mailbox_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Mailbox_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Mailbox___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Mailbox_Args__create *__args = __aa;
    ti_sysbios_knl_Mailbox_Params __prms;
    ti_sysbios_knl_Mailbox_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Mailbox_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Mailbox_Instance_init__E(__newobj, __args->msgSize, __args->numMsgs, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Mailbox_Handle ti_sysbios_knl_Mailbox_create( xdc_SizeT msgSize, xdc_UInt numMsgs, const ti_sysbios_knl_Mailbox_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Mailbox_Params __prms;
    ti_sysbios_knl_Mailbox_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Mailbox_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Mailbox_Instance_init__E(__newobj, msgSize, numMsgs, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Mailbox_construct(ti_sysbios_knl_Mailbox_Struct *__obj, xdc_SizeT msgSize, xdc_UInt numMsgs, const ti_sysbios_knl_Mailbox_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Mailbox_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Mailbox_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Mailbox_Instance_init__E((xdc_Ptr)__obj, msgSize, numMsgs, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Mailbox_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Mailbox_destruct(ti_sysbios_knl_Mailbox_Struct *obj)
{
    ti_sysbios_knl_Mailbox_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Mailbox_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, *((ti_sysbios_knl_Mailbox_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Mailbox_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Mailbox_delete(ti_sysbios_knl_Mailbox_Handle *instp)
{
    ti_sysbios_knl_Mailbox_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32792;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__ *)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Queue___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    ti_sysbios_knl_Queue_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32793;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__ *)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, __args->count, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, count, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    ti_sysbios_knl_Semaphore_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32794;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__ *)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Swi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Swi_Args__create *__args = __aa;
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, __args->swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *__obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)__obj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    ti_sysbios_knl_Swi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32795;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__ *)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Task___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, __args->fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    ti_sysbios_knl_Task_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

