#pragma once

#define FAULT_STATUS_NONE 0U
#define FAULT_STATUS_TEMPORARY 1U
#define FAULT_STATUS_PERMANENT 2U

// Fault types, matches cereal.log.PandaState.FaultType
#define FAULT_RELAY_MALFUNCTION             (1UL << 0)
#define FAULT_UNUSED_INTERRUPT_HANDLED      (1UL << 1)
#define FAULT_INTERRUPT_RATE_CAN_1          (1UL << 2)
#define FAULT_INTERRUPT_RATE_CAN_2          (1UL << 3)
#define FAULT_INTERRUPT_RATE_CAN_3          (1UL << 4)
#define FAULT_INTERRUPT_RATE_TACH           (1UL << 5)
#define FAULT_INTERRUPT_RATE_INTERRUPTS     (1UL << 7)
#define FAULT_INTERRUPT_RATE_SPI_DMA        (1UL << 8)
#define FAULT_INTERRUPT_RATE_USB            (1UL << 15)
#define FAULT_REGISTER_DIVERGENT            (1UL << 18)
#define FAULT_INTERRUPT_RATE_TICK           (1UL << 21)
#define FAULT_HEARTBEAT_LOOP_WATCHDOG       (1UL << 26)

// Permanent faults
#define PERMANENT_FAULTS 0U

extern uint8_t fault_status;
extern uint32_t faults;

void fault_occurred(uint32_t fault);
void fault_recovered(uint32_t fault);
