nvcc --relocatable-device-code=true -L/usr/local/cuda/lib64 main.c collider/collider.c caracalnet/caracalnet.cu caracalnet/cn_core.cu caracalnet/cn_math.cu caracalnet/cn_util.cu -lcudart -lm -lraylib
