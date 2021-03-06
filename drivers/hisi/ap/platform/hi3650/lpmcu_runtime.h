#ifndef _LPMCU_RUNTIME_H_
#define _LPMCU_RUNTIME_H_ 
#include <m3_sram_map.h>
#ifndef BYTE_REF
#define BYTE_REF(address) (* ((unsigned char volatile * ) (address)))
#define HALFWORD_REF(address) (* ((unsigned short volatile * ) (address)))
#define WORD_REF(address) (* ((unsigned int volatile * ) (address)))
#define WORD_PTR(address) (* ((unsigned int volatile **) (address)))
#endif
enum {
 WITH_MODEM_OFFSET = 0,
 LOWPM_SHOW_OFFSET = 3,
 LOWPM_CFG_OFFSET = 4,
};
#define IS_MODEM ((u8)BIT(WITH_MODEM_OFFSET))
#define LOWPM_SHOW ((u8)BIT(LOWPM_SHOW_OFFSET))
#define LOWPM_CFG ((u8)BIT(LOWPM_CFG_OFFSET))
enum {
 TMP_OP_OFFSET = 0,
 TMP_STRENGTHEN_MONITOR_OFFSET = 1,
 TMP_CTRL_RUNNING_OFFSET = 2,
 TMP_DDRC_ENABLE_OFFSET = 3,
 TMP_TSEN_RST_ENABLE_OFFSET = 4,
 TMP_DDR_HIGH_LIM_OFFSET = 5,
};
#define TMP_STRENGTHEN_MONITOR ((u8)BIT(TMP_STRENGTHEN_MONITOR_OFFSET))
#define TMP_CTRL_RUNNING ((u8)BIT(TMP_CTRL_RUNNING_OFFSET))
#define TMP_TSEN_RST_ENABLE ((u8)BIT(TMP_TSEN_RST_ENABLE_OFFSET))
#define TMP_DDR_HIGH_LIM ((u8)BIT(TMP_DDR_HIGH_LIM_OFFSET))
enum {
 DDR_OP_OFFSET = 0,
 DDR_MNT_OFFSET = 1,
 DDR_DFS_OFFSET = 2,
 DDR_AFS_OFFSET = 3,
 DDR_TMP_OFFSET = 4,
 DDR_TMP_NREC_OFFSET = 5,
 DDR_TMP_NRST_OFFSET = 6,
 DDR_TMP_SHANRST_OFFSET = 7,
};
#define DDR_OP_EN ((u8)BIT(DDR_OP_OFFSET))
#define DDR_MNT_EN ((u8)BIT(DDR_MNT_OFFSET))
#define DDR_DFS_EN ((u8)BIT(DDR_DFS_OFFSET))
#define DDR_AFS_EN ((u8)BIT(DDR_AFS_OFFSET))
#define DDR_TMP_EN ((u8)BIT(DDR_TMP_OFFSET))
#define DDR_TMP_NREC ((u8)BIT(DDR_TMP_NREC_OFFSET))
#define DDR_TMP_NRST ((u8)BIT(DDR_TMP_NRST_OFFSET))
#define DDR_TMP_SHANRST ((u8)BIT(DDR_TMP_SHANRST_OFFSET))
enum {
 OP_ENABLE_OFFSET = 0,
 VDM_ENABLE_OFFSET = 1,
 DFS_ENABLE_OFFSET = 2,
 DVFS_ENABLE_OFFSET = 2,
 AVS_ENABLE_OFFSET = 3,
 AFS_ENABLE_OFFSET = 3,
 IDLE_DIV_OFFSET = 4,
 FREQ_DOWN_OFFSET = 5,
 DVFS_RUNNING_OFFSET = 6,
 AVS_RUNNING_OFFSET = 7,
 VOL_SCALE_OFFSET = 7,
};
#define OP_ENABLE ((u8)BIT(OP_ENABLE_OFFSET))
#define VDM_ENABLE ((u8)BIT(VDM_ENABLE_OFFSET))
#define DFS_ENABLE ((u8)BIT(DFS_ENABLE_OFFSET))
#define DVFS_ENABLE ((u8)BIT(DVFS_ENABLE_OFFSET))
#define AVS_ENABLE ((u8)BIT(AVS_ENABLE_OFFSET))
#define AFS_ENABLE ((u8)BIT(AFS_ENABLE_OFFSET))
#define IDLE_DIV ((u8)BIT(IDLE_DIV_OFFSET))
#define FREQ_DOWN ((u8)BIT(FREQ_DOWN_OFFSET))
#define DVFS_RUNNING ((u8)BIT(DVFS_RUNNING_OFFSET))
#define AVS_RUNNING ((u8)BIT(AVS_RUNNING_OFFSET))
#define VOL_SCALE ((u8)BIT(VOL_SCALE_OFFSET))
#define AVS_MASK (AVS_ENABLE | AVS_RUNNING)
#define RUNTIME_CPU_CURRENT_ADDR(n) (RUNTIME_VAR_BASE + 0x000 + ((n) << 2))
#define CPU_CURRENT(n) (BYTE_REF(RUNTIME_CPU_CURRENT_ADDR(n)))
#define RUNTIME_CPU_TARGET_ADDR(n) (RUNTIME_VAR_BASE + 0x001 + ((n) << 2))
#define CPU_TARGET(n) (BYTE_REF(RUNTIME_CPU_TARGET_ADDR(n)))
#define RUNTIME_CPU_TCTRL_ADDR(n) (RUNTIME_VAR_BASE + 0x002 + ((n) << 2))
#define CPU_TCTRL(n) (BYTE_REF(RUNTIME_CPU_TCTRL_ADDR(n)))
#define RUNTIME_CPU_SVFD_ADDR(n) (RUNTIME_VAR_BASE + 0x003 + ((n) << 2))
#define CPU_SVFD(n) (BYTE_REF(RUNTIME_CPU_SVFD_ADDR(n)))
#define RUNTIME_GPU_CURRENT_ADDR (RUNTIME_VAR_BASE + 0x008)
#define GPU_CURRENT (BYTE_REF(RUNTIME_GPU_CURRENT_ADDR))
#define RUNTIME_GPU_TARGET_ADDR (RUNTIME_VAR_BASE + 0x009)
#define GPU_TARGET (BYTE_REF(RUNTIME_GPU_TARGET_ADDR))
#define RUNTIME_GPU_PLL_ADDR (RUNTIME_VAR_BASE + 0x00A)
#define GPU_PLL (BYTE_REF(RUNTIME_GPU_PLL_ADDR))
#define RUNTIME_GPU_LAST_PLL_ADDR (RUNTIME_VAR_BASE + 0x00B)
#define GPU_LAST_PLL (BYTE_REF(RUNTIME_GPU_LAST_PLL_ADDR))
#define RUNTIME_DDR_CURRENT_ADDR (RUNTIME_VAR_BASE + 0x00C)
#define DDR_CURRENT (BYTE_REF(RUNTIME_DDR_CURRENT_ADDR))
#define RUNTIME_DDR_TARGET_ADDR (RUNTIME_VAR_BASE + 0x00D)
#define DDR_TARGET (BYTE_REF(RUNTIME_DDR_TARGET_ADDR))
#define RUNTIME_DDR_PLL_ADDR (RUNTIME_VAR_BASE + 0x00E)
#define DDR_PLL (BYTE_REF(RUNTIME_DDR_PLL_ADDR))
#define RUNTIME_DDR_LAST_PLL_ADDR (RUNTIME_VAR_BASE + 0x00F)
#define DDR_LAST_PLL (BYTE_REF(RUNTIME_DDR_LAST_PLL_ADDR))
#define RUNTIME_CPU_MIN_ADDR(n) (RUNTIME_VAR_BASE + 0x010 + ((n) << 2))
#define CPU_MIN(n) (BYTE_REF(RUNTIME_CPU_MIN_ADDR(n)))
#define RUNTIME_CPU_MAX_ADDR(n) (RUNTIME_VAR_BASE + 0x011 + ((n) << 2))
#define CPU_MAX(n) (BYTE_REF(RUNTIME_CPU_MAX_ADDR(n)))
#define RUNTIME_CPU_SAFE_ADDR(n) (RUNTIME_VAR_BASE + 0x012 + ((n) << 2))
#define CPU_SAFE(n) (BYTE_REF(RUNTIME_CPU_SAFE_ADDR(n)))
#define RUNTIME_CPU_STEP_ADDR(n) (RUNTIME_VAR_BASE + 0x013 + ((n) << 2))
#define CPU_STEP(n) (BYTE_REF(RUNTIME_CPU_STEP_ADDR(n)))
#define RUNTIME_GPU_MIN_ADDR (RUNTIME_VAR_BASE + 0x018)
#define GPU_MIN (BYTE_REF(RUNTIME_GPU_MIN_ADDR))
#define RUNTIME_GPU_MAX_ADDR (RUNTIME_VAR_BASE + 0x019)
#define GPU_MAX (BYTE_REF(RUNTIME_GPU_MAX_ADDR))
#define RUNTIME_GPU_SAFE_ADDR (RUNTIME_VAR_BASE + 0x01A)
#define GPU_SAFE (BYTE_REF(RUNTIME_GPU_SAFE_ADDR))
#define RUNTIME_GPU_STEP_ADDR (RUNTIME_VAR_BASE + 0x01B)
#define GPU_STEP (BYTE_REF(RUNTIME_GPU_STEP_ADDR))
#define RUNTIME_DDR_MIN_ADDR (RUNTIME_VAR_BASE + 0x01C)
#define DDR_MIN (BYTE_REF(RUNTIME_DDR_MIN_ADDR))
#define RUNTIME_DDR_MAX_ADDR (RUNTIME_VAR_BASE + 0x01D)
#define DDR_MAX (BYTE_REF(RUNTIME_DDR_MAX_ADDR))
#define RUNTIME_DDR_DN_LIMIT_ADDR (RUNTIME_VAR_BASE + 0x01E)
#define DDR_DN_LIMIT (BYTE_REF(RUNTIME_DDR_DN_LIMIT_ADDR))
#define RUNTIME_DDR_UP_LIMIT_ADDR (RUNTIME_VAR_BASE + 0x01F)
#define DDR_UP_LIMIT (BYTE_REF(RUNTIME_DDR_UP_LIMIT_ADDR))
#define RUNTIME_CPU_STATUS_ADDR(n) (RUNTIME_VAR_BASE + 0x020 + ((n) << 2))
#define CPU_STATUS(n) (BYTE_REF(RUNTIME_CPU_STATUS_ADDR(n)))
#define RUNTIME_CPU_ONLINE_NUM_ADDR(n) (RUNTIME_VAR_BASE + 0x021 + ((n) << 2))
#define CPU_ONLINE_NUM(n) (BYTE_REF(RUNTIME_CPU_ONLINE_NUM_ADDR(n)))
#define RUNTIME_CPU_ONLINE_STATUS_ADDR(n) (RUNTIME_VAR_BASE + 0x022 + ((n) << 2))
#define CPU_ONLINE_STATUS(n) (BYTE_REF(RUNTIME_CPU_ONLINE_STATUS_ADDR(n)))
#define RUNTIME_GPU_STATUS_ADDR (RUNTIME_VAR_BASE + 0x028)
#define GPU_STATUS (BYTE_REF(RUNTIME_GPU_STATUS_ADDR))
#define RUNTIME_GPU_ONLINE_NUM_ADDR (RUNTIME_VAR_BASE + 0x029)
#define GPU_ONLINE_NUM (BYTE_REF(RUNTIME_GPU_ONLINE_NUM_ADDR))
#define RUNTIME_GPU_ONLINE_STATUS_ADDR (RUNTIME_VAR_BASE + 0x02A)
#define GPU_ONLINE_STATUS (BYTE_REF(RUNTIME_GPU_ONLINE_STATUS_ADDR))
#define RUNTIME_DDR_TYPE_ADDR (RUNTIME_VAR_BASE + 0x02B)
#define DDR_TYPE (BYTE_REF(RUNTIME_DDR_TYPE_ADDR))
#define RUNTIME_DDR_STATUS_ADDR (RUNTIME_VAR_BASE + 0x02C)
#define DDR_STATUS (BYTE_REF(RUNTIME_DDR_STATUS_ADDR))
#define RUNTIME_DDR_CPU_LIMIT_ADDR (RUNTIME_VAR_BASE + 0x02D)
#define DDR_CPU_LIMIT (BYTE_REF(RUNTIME_DDR_CPU_LIMIT_ADDR))
#define RUNTIME_TMP_STATUS_ADDR (RUNTIME_VAR_BASE + 0x02E)
#define TMP_STATUS (BYTE_REF(RUNTIME_TMP_STATUS_ADDR))
#define RUNTIME_TMP_PERIOD_ADDR (RUNTIME_VAR_BASE + 0x02F)
#define TMP_PERIOD (BYTE_REF(RUNTIME_TMP_PERIOD_ADDR))
#define RUNTIME_TMP_NOR_ADDR (RUNTIME_VAR_BASE + 0x030)
#define TMP_NOR (BYTE_REF(RUNTIME_TMP_NOR_ADDR))
#define RUNTIME_TMP_HIGH_ADDR (RUNTIME_VAR_BASE + 0x031)
#define TMP_HIGH (BYTE_REF(RUNTIME_TMP_HIGH_ADDR))
#define RUNTIME_TMP_RST_ADDR (RUNTIME_VAR_BASE + 0x032)
#define TMP_RST (BYTE_REF(RUNTIME_TMP_RST_ADDR))
#define RUNTIME_TMP_LAST_ADDR (RUNTIME_VAR_BASE + 0x033)
#define TMP_LAST (BYTE_REF(RUNTIME_TMP_LAST_ADDR))
#define RUNTIME_WAKE_STATUS_ADDR (RUNTIME_VAR_BASE + 0x034)
#define WAKE_STATUS (BYTE_REF(RUNTIME_WAKE_STATUS_ADDR))
#define RUNTIME_TASK_CYCLE_STATUS_ADDR (RUNTIME_VAR_BASE + 0x035)
#define TASK_CYCLE_STATUS (BYTE_REF(RUNTIME_TASK_CYCLE_STATUS_ADDR))
#define RUNTIME_LPM3_CFG_ADDR (RUNTIME_VAR_BASE + 0x036)
#define LPM3_CFG (BYTE_REF(RUNTIME_LPM3_CFG_ADDR))
#define RUNTIME_DDR_TMP_PERIOD_ADDR (RUNTIME_VAR_BASE + 0x037)
#define DDR_TMP_PERIOD (BYTE_REF(RUNTIME_DDR_TMP_PERIOD_ADDR))
#define RUNTIME_TSENSOR_ADDR(n) (RUNTIME_VAR_BASE + 0x038 + (n)*2)
#define EFUSE_FT_LOCAL_SENSOR(n) (HALFWORD_REF(RUNTIME_TSENSOR_ADDR(n)))
#define RUNTIME_CMD_CNT_ADDR (RUNTIME_VAR_BASE + 0x040)
#define CMD_CNT (WORD_REF(RUNTIME_CMD_CNT_ADDR))
#define RUNTIME_DATA_CNT_ADDR (RUNTIME_VAR_BASE + 0x044)
#define DATA_CNT (WORD_REF(RUNTIME_DATA_CNT_ADDR))
#define RUNTIME_SYNC_IPC_TASK_MSG_ADDR (RUNTIME_VAR_BASE + 0x048)
#define SYNC_IPC_TASK_MSG (WORD_REF(RUNTIME_SYNC_IPC_TASK_MSG_ADDR))
#define RUNTIME_ASYNC_IPC_TASK_MSG_ADDR (RUNTIME_VAR_BASE + 0x04C)
#define ASYNC_IPC_TASK_MSG (WORD_REF(RUNTIME_ASYNC_IPC_TASK_MSG_ADDR))
#define RUNTIME_LPM3_DDR_LOG_WP_ADDR (RUNTIME_VAR_BASE + 0x050)
#define LPM3_DDR_LOG_WP (WORD_REF(RUNTIME_LPM3_DDR_LOG_WP_ADDR))
#define RUNTIME_LPM3_DDR_LOG_RP_ADDR (RUNTIME_VAR_BASE + 0x054)
#define LPM3_DDR_LOG_RP (WORD_REF(RUNTIME_LPM3_DDR_LOG_RP_ADDR))
#define RUNTIME_LPM3_DDR_LOG_FLAG_ADDR (RUNTIME_VAR_BASE + 0x058)
#define LPM3_DDR_LOG_FLAG (WORD_REF(RUNTIME_LPM3_DDR_LOG_FLAG_ADDR))
#define RUNTIME_SYS_DSLEEP_CNT_ADDR (RUNTIME_VAR_BASE + 0x060)
#define SYS_DSLEEP_CNT (WORD_REF(RUNTIME_SYS_DSLEEP_CNT_ADDR))
#define RUNTIME_SYS_DWAKE_CNT_ADDR (RUNTIME_VAR_BASE + 0x064)
#define SYS_DWAKE_CNT (WORD_REF(RUNTIME_SYS_DWAKE_CNT_ADDR))
#define RUNTIME_SUBSYS_WAKE_CNT_ADDR(n) (RUNTIME_VAR_BASE + 0x068 + ((n) << 2))
#define SUBSYS_WAKE_CNT(n) (WORD_REF(RUNTIME_SUBSYS_WAKE_CNT_ADDR(n)))
#define RUNTIME_AP_WAKE_CNT_ADDR (RUNTIME_VAR_BASE + 0x068)
#define AP_WAKE_CNT (WORD_REF(RUNTIME_AP_WAKE_CNT_ADDR))
#define RUNTIME_HIFI_WAKE_CNT_ADDR (RUNTIME_VAR_BASE + 0x06C)
#define HIFI_WAKE_CNT (WORD_REF(RUNTIME_HIFI_WAKE_CNT_ADDR))
#define RUNTIME_MODEM_WAKE_CNT_ADDR (RUNTIME_VAR_BASE + 0x070)
#define MODEM_WAKE_CNT (WORD_REF(RUNTIME_MODEM_WAKE_CNT_ADDR))
#define RUNTIME_IOM3_WAKE_CNT_ADDR (RUNTIME_VAR_BASE + 0x074)
#define IOM3_WAKE_CNT (WORD_REF(RUNTIME_IOM3_WAKE_CNT_ADDR))
#define RUNTIME_LPM3_WAKE_CNT_ADDR (RUNTIME_VAR_BASE + 0x078)
#define LPM3_WAKE_CNT (WORD_REF(RUNTIME_LPM3_WAKE_CNT_ADDR))
#define RUNTIME_AP_SUSPEND_CNT_ADDR (RUNTIME_VAR_BASE + 0x07C)
#define AP_SUSPEND_CNT (WORD_REF(RUNTIME_AP_SUSPEND_CNT_ADDR))
#define RUNTIME_AP_RESUME_CNT_ADDR (RUNTIME_VAR_BASE + 0x080)
#define AP_RESUME_CNT (WORD_REF(RUNTIME_AP_RESUME_CNT_ADDR))
#define RUNTIME_IOM3_SUSPEND_CNT_ADDR (RUNTIME_VAR_BASE + 0x084)
#define IOM3_SUSPEND_CNT (WORD_REF(RUNTIME_IOM3_SUSPEND_CNT_ADDR))
#define RUNTIME_IOM3_RESUME_CNT_ADDR (RUNTIME_VAR_BASE + 0x088)
#define IOM3_RESUME_CNT (WORD_REF(RUNTIME_IOM3_RESUME_CNT_ADDR))
#define RUNTIME_MODEM_SUSPEND_CNT_ADDR (RUNTIME_VAR_BASE + 0x08C)
#define MODEM_SUSPEND_CNT (WORD_REF(RUNTIME_MODEM_SUSPEND_CNT_ADDR))
#define RUNTIME_MODEM_RESUME_CNT_ADDR (RUNTIME_VAR_BASE + 0x090)
#define MODEM_RESUME_CNT (WORD_REF(RUNTIME_MODEM_RESUME_CNT_ADDR))
#define RUNTIME_HIFI_SUSPEND_CNT_ADDR (RUNTIME_VAR_BASE + 0x094)
#define HIFI_SUSPEND_CNT (WORD_REF(RUNTIME_HIFI_SUSPEND_CNT_ADDR))
#define RUNTIME_HIFI_RESUME_CNT_ADDR (RUNTIME_VAR_BASE + 0x098)
#define HIFI_RESUME_CNT (WORD_REF(RUNTIME_HIFI_RESUME_CNT_ADDR))
#define RUNTIME_WAKE_IRQ_ADDR (RUNTIME_VAR_BASE + 0x09C)
#define WAKE_IRQ (WORD_REF(RUNTIME_WAKE_IRQ_ADDR))
#define RUNTIME_AP_WAKE_IRQ_ADDR (RUNTIME_VAR_BASE + 0x0A0)
#define AP_WAKE_IRQ (WORD_REF(RUNTIME_AP_WAKE_IRQ_ADDR))
#define RUNTIME_AP_NSIPC_IRQ_ADDR (RUNTIME_VAR_BASE + 0x0A4)
#define AP_NSIPC_IRQ (WORD_REF(RUNTIME_AP_NSIPC_IRQ_ADDR))
#define RUNTIME_CPU_LAST_ADDR(n) (RUNTIME_VAR_BASE + 0x0A8 + n)
#define CPU_LAST(n) (BYTE_REF(RUNTIME_CPU_LAST_ADDR(n)))
#define RUNTIME_MAX_IRQ_MAST_PERIOD_ADDR (RUNTIME_VAR_BASE + 0x0AC)
#define MAX_IRQ_MAST_PERIOD (WORD_REF(RUNTIME_MAX_IRQ_MAST_PERIOD_ADDR))
#define RUNTIME_MAX_IRQ_MASK_FUNC_ADDR (RUNTIME_VAR_BASE + 0x0B0)
#define MAX_IRQ_MASK_FUNC (WORD_REF(RUNTIME_MAX_IRQ_MASK_FUNC_ADDR))
#define RUNTIME_IRQ_MAST_PERIOD_SUM_ADDR (RUNTIME_VAR_BASE + 0x0B4)
#define IRQ_MAST_PERIOD_SUM (WORD_REF(RUNTIME_IRQ_MAST_PERIOD_SUM_ADDR))
#define RUNTIME_IRQ_MASK_TIMES_ADDR (RUNTIME_VAR_BASE + 0x0B8)
#define IRQ_MASK_TIMES (WORD_REF(RUNTIME_IRQ_MASK_TIMES_ADDR))
#define RUNTIME_LPMCU_LPNV_ADDR (RUNTIME_VAR_BASE + 0x0BC)
#define LPM3_FUNC_STATE (WORD_REF(RUNTIME_LPMCU_LPNV_ADDR))
#define RUNTIME_SYS_SLEEP_CNT_ADDR (RUNTIME_VAR_BASE + 0x0C4)
#define SYS_SLEEP_CNT (WORD_REF(RUNTIME_SYS_SLEEP_CNT_ADDR))
#define RUNTIME_SLEEP_WAKE_IRQ_ADDR (RUNTIME_VAR_BASE + 0x0C8)
#define SLEEP_WAKE_IRQ (WORD_REF(RUNTIME_SLEEP_WAKE_IRQ_ADDR))
#define RUNTIME_SLEEP_WAKE_IRQ1_ADDR (RUNTIME_VAR_BASE + 0x0CC)
#define SLEEP_WAKE_IRQ1 (WORD_REF(RUNTIME_SLEEP_WAKE_IRQ1_ADDR))
#define RUNTIME_HISEE_DATA_ADDR (RUNTIME_VAR_BASE + 0x0D0)
#define HISEE_SHARE_DATA (WORD_REF(RUNTIME_HISEE_DATA_ADDR))
#define RUNTIME_IOMCU_WAKEIRQ_CNT_ADDR (RUNTIME_VAR_BASE + 0x0D4)
#define IOMCU_WAKEIRQ_CNT (WORD_REF(RUNTIME_IOMCU_WAKEIRQ_CNT_ADDR))
#define RUNTIME_DDR_FREQ_LOAD_ADDR (RUNTIME_VAR_BASE + 0x0D8)
#define RUNTIME_DDR_INITINFO_ADDR (RUNTIME_VAR_BASE + 0x0E8)
#define DDR_INITINFO (WORD_REF(RUNTIME_DDR_INITINFO_ADDR))
#define RUNTIME_DDR_FEATURE_ADDR (RUNTIME_VAR_BASE + 0x0EC)
#define DDR_FEATURE (WORD_REF(RUNTIME_DDR_FEATURE_ADDR))
#define RUNTIME_DDR_LAST_ADDR (RUNTIME_VAR_BASE + 0xF0)
#define DDR_LAST (BYTE_REF(RUNTIME_DDR_LAST_ADDR))
#define RUNTIME_TMP_CUR_ADDR(n) (RUNTIME_VAR_BASE + 0xF1 + n)
#define TMP_CUR(n) (BYTE_REF(RUNTIME_TMP_CUR_ADDR(n)))
#define RUNTIME_CPUIDLE_SLEEP_CNT_ADDR (RUNTIME_VAR_BASE + 0xF4)
#define CPUIDLE_SLEEP_CNT (WORD_REF(RUNTIME_CPUIDLE_SLEEP_CNT_ADDR))
#define RUNTIME_CPUIDLE_RESUME_CNT_ADDR (RUNTIME_VAR_BASE + 0xF8)
#define CPUIDLE_RESUME_CNT (WORD_REF(RUNTIME_CPUIDLE_RESUME_CNT_ADDR))
#define RUNTIME_WAKE_IRQ1_ADDR (RUNTIME_VAR_BASE + 0xFC)
#define WAKE_IRQ1 (WORD_REF(RUNTIME_WAKE_IRQ1_ADDR))
#define RUNTIME_SPACE_ADDR_END (RUNTIME_WAKE_IRQ1_ADDR)
#if (RUNTIME_SPACE_ADDR_END >= (RUNTIME_VAR_BASE + RUNTIME_VAR_SIZE))
 #error "runtime space overflow!!!"
#endif
#define GET_OBJ(obj_feature) ((obj_feature) >> 16)
#define GET_FEATURE(obj_feature) ((obj_feature) & 0xFFFF)
typedef enum MODULE_IP
{
 LP_LIT_CPU = 0,
 LP_BIG_CPU = 1,
 LP_GPU = 2,
 LP_DDR = 3,
 LP_TMP = 4,
 LP_LPM3 = 5,
 LP_IOMCU,
 LP_ACPU,
 LP_PERI,
 LP_HIFI,
 LP_MODEM,
 LP_MMBUF,
 LP_MODULE_IP_MAX,
} MODULE_IP_T;
typedef enum MODULE_FUNC
{
 LP_LCPU_VDM = (LP_LIT_CPU << 16) | 0x0001,
 LP_LCPU_AVS = (LP_LIT_CPU << 16) | 0x0003,
 LP_BCPU_VDM = (LP_BIG_CPU << 16) | 0x0001,
 LP_BCPU_AVS = (LP_BIG_CPU << 16) | 0x0003,
 LP_GPU_VDM = (LP_GPU << 16) | 0x0001,
 LP_GPU_AVS = (LP_GPU << 16) | 0x0003,
 LP_DDR_TMP_ENABLE = (LP_DDR << 16) | DDR_TMP_OFFSET,
 LP_DDR_DFS = (LP_DDR << 16) | DDR_DFS_OFFSET,
 LP_DDR_AFS = (LP_DDR << 16) | DDR_AFS_OFFSET,
 LP_DDR_TMP_NREC = (LP_DDR << 16) | DDR_TMP_NREC_OFFSET,
 LP_DDR_TMP_NRST = (LP_DDR << 16) | DDR_TMP_NRST_OFFSET,
 LP_DDR_TMP_SHANRST = (LP_DDR << 16) | DDR_TMP_SHANRST_OFFSET,
 LP_TMP_TCTRL = (LP_TMP << 16) | TMP_OP_OFFSET,
 LP_TMP_DDR_TMONITOR = (LP_TMP << 16) | TMP_DDRC_ENABLE_OFFSET,
 LP_TSENSOR_RESET = (LP_TMP << 16) | TMP_TSEN_RST_ENABLE_OFFSET,
 LP_LPM3_SYS_SR = (LP_LPM3 << 16) | 0x0000,
 LP_LPM3_ACPU_SR = (LP_LPM3 << 16) | 0x0001,
 LP_LPM3_IOMCU_SR = (LP_LPM3 << 16) | 0x0002,
 LP_LPM3_HIFI_SR = (LP_LPM3 << 16) | 0x0003,
 LP_LPM3_GPU_SR = (LP_LPM3 << 16) | 0x0004,
 LP_LPM3_MODEM_SR = (LP_LPM3 << 16) | 0x0005,
 LP_LPM3_SYS_S0 = (LP_LPM3 << 16) | 0x0006,
 LP_LPM3_SYS_S1 = (LP_LPM3 << 16) | 0x0007,
 LP_LPM3_SYS_S2 = (LP_LPM3 << 16) | 0x0008,
 LP_LPM3_SYS_S3 = (LP_LPM3 << 16) | 0x0009,
 LP_LPM3_BUS_DFS = (LP_LPM3 << 16) | 0x000A,
 LP_LPM3_PERI_AVS = (LP_LPM3 << 16) | 0x000B,
 LP_LPM3_HIFI_ULLP = (LP_LPM3 << 16) | 0x000C,
 LP_LPM3_MMBUF = (LP_LPM3 << 16) | 0x000D,
 LP_LPM3_PERIL_VOL = (LP_LPM3 << 16) | 0x000E,
 LP_LPM3_DDRFSGT = (LP_LPM3 << 16) | 0x000F,
 LP_LPM3_DDRFSGT_PP = (LP_LPM3 << 16) | 0x0010,
 LP_LPM3_DDRCRGGT = (LP_LPM3 << 16) | 0x0011,
} MODULE_FUNC_T;
#define LP_FEATURE_MAX 31
#define FUNCTION_ENABLE 1
#define FUNCTION_DISABLE 0
#endif
