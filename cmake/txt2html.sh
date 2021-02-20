##==================================================================================================
##  EVE - Expressive Vector Engine
##  Copyright 2020 Joel FALCOU
##  Copyright 2020 Jean-Thierry LAPRESTE
##
##  Licensed under the MIT License <http://opensource.org/licenses/MIT>.
##  SPDX-License-Identifier: MIT
##==================================================================================================
#!/usr/bin/env bash

srcfile=${1?"Please provide a source file"}
header=${2:-"Example\n===================================================================================================="}

MKHEADER="<meta charset=\"utf-8\">\n$header\n<script type=\"preformatted\">\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ c++"
MKFOOTER="\n<!-- Markdeep: -->\n<script src=\"../../markdeep.min.js\"></script>\n<script src=\"https://casual-effects.com/markdeep/latest/markdeep.min.js?\"></script>"

echo -e ${MKHEADER} | sed 's/^-e//'
cat $srcfile
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
echo "</script>"
echo -e ${MKFOOTER} | sed 's/^-e//'
