#!/bin/bash

DIR=testOcci_v1.0.1
TAR=testOcci_v1.0.1.tar.gz

mkdir -p ${DIR}
cp -rf ./testOcci ${DIR}
cp -rf ./readme ${DIR}
cp -rf ./install.sh ${DIR}
cp -rf ./uninstall.sh ${DIR}
cp -rf /home/SCS/install/lib/libocci.so.11.1 ${DIR}
cp -rf /home/SCS/install/lib/libsqlplus.so ${DIR}
cp -rf /home/SCS/install/lib/libclntsh.so.11.1 ${DIR}
cp -rf /home/SCS/install/lib/libnnz11.so ${DIR}

tar -czvf ${TAR} ${DIR}
rm -rf ${DIR}
