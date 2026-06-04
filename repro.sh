#!/bin/bash
#
# Copyright (C) 2026 Aaron <communicate_aaron@outlook.com>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.
#

FILE="repro_comment.cpp"
cat <<EOF > $FILE
/**
 * - **最佳实践**: 即使编译器允许省略 return 语句（会自动返回 0），显式返回仍是推荐做法ttttttttttttttttttttttttttttttttttttt
 */
EOF

echo "--- Original ---"
cat $FILE
echo "--- Formatted (ColumnLimit: 80) ---"
clang-format -style="{BasedOnStyle: Google, ColumnLimit: 80, ReflowComments: true}" $FILE
echo "--- Formatted (ColumnLimit: 40) ---"
clang-format -style="{BasedOnStyle: Google, ColumnLimit: 40, ReflowComments: true}" $FILE
rm $FILE
