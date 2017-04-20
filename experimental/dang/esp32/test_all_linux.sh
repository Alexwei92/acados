#!/usr/bin/env bash

PROJECT=nmpc_qpoases

python3 script_test_nmpc/test_nmpc.py ../../.. $PROJECT
cd $PROJECT
make "PROJECT=$PROJECT"
bin/$PROJECT.exe
make clean "PROJECT=$PROJECT"
cd ..

PROJECT=ocp_qp_hpmpc

python3 script_test_ocp_qp_hpmpc/test_ocp_qp_hpmpc.py ../../.. $PROJECT
cd $PROJECT
make "PROJECT=$PROJECT"
bin/$PROJECT.exe
make clean "PROJECT=$PROJECT"
