// vim: set ts=8 sts=2 sw=2 tw=99 et:
//
// This file is part of SourcePawn.
// 
// SourcePawn is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// SourcePawn is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with SourcePawn.  If not, see <http://www.gnu.org/licenses/>.
#ifndef _include_sourcepawn_runtime_helpers_h_
#define _include_sourcepawn_runtime_helpers_h_

#include <sp_vm_types.h>

namespace sp {

void ReportOutOfBoundsError(cell_t index, cell_t bounds);
void ReportUnboundNative();

} // namespace sp

#endif // _include_sourcepawn_runtime_helpers_h_

