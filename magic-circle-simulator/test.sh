#!/bin/bash

set -e

make


set +e

echo 'Example 1'
diff testcase/example1.output <(./my_program.out < testcase/example1.input)
echo 'Example 2'
diff testcase/example2.output <(./my_program.out < testcase/example2.input)
