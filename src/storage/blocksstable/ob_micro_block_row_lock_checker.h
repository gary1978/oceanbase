/**
 * Copyright (c) 2021 OceanBase
 * OceanBase CE is licensed under Mulan PubL v2.
 * You can use this software according to the terms and conditions of the Mulan PubL v2.
 * You may obtain a copy of Mulan PubL v2 at:
 *          http://license.coscl.org.cn/MulanPubL-2.0
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PubL v2 for more details.
 */

#ifndef OB_MICRO_BLOCK_ROW_LOCK_CHECKER_H_
#define OB_MICRO_BLOCK_ROW_LOCK_CHECKER_H_

#include "storage/blocksstable/ob_block_sstable_struct.h"
#include "storage/blocksstable/ob_imicro_block_reader.h"
#include "storage/blocksstable/ob_micro_block_row_getter.h"

namespace oceanbase {
namespace blocksstable {

class ObMicroBlockRowLockChecker : public ObIMicroBlockRowFetcher {
public:
  ObMicroBlockRowLockChecker();
  virtual ~ObMicroBlockRowLockChecker();
  int check_row_locked(const transaction::ObTransStateTableGuard& trans_table_guard,
      const transaction::ObTransID& trans_id, const common::ObStoreRowkey& rowkey,
      const ObFullMacroBlockMeta& macro_meta, const ObMicroBlockData& block_data,
      const storage::ObSSTableRowkeyHelper* rowkey_helper, storage::ObStoreRowLockState& lock_state);
};

}  // namespace blocksstable
}  // namespace oceanbase

#endif /* OB_MICRO_BLOCK_ROW_EXISTER_H_ */
