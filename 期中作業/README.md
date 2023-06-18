# 這邊是我參考以下連結試作
參考連結:
[安裝docker]([https://hackmd.io/@bluewings1211/SJkLOW9_l?type=view#%E5%AE%89%E8%A3%9D-Docker](https://docs.docker.com/get-docker/))
[手把手建立anaconda環境](https://hackmd.io/@bluewings1211/SJkLOW9_l?type=view#%E5%AE%89%E8%A3%9D-Docker)

建立anaconda環境:
```
user@user-virtual-machine:~$ docker run -i -t continuumio/anaconda3 /bin/bash
Unable to find image 'continuumio/anaconda3:latest' locally
latest: Pulling from continuumio/anaconda3
26c5c85e47da: Pull complete 
a940c36fdc26: Pull complete 
Digest: sha256:6697f6ab7d940e557562c2d7c120bf8ef23f9392a0a3145dc5bc74d2ffe18519
Status: Downloaded newer image for continuumio/anaconda3:latest
(base) root@8dd627cab792:/# exit
exit
user@user-virtual-machine:~$ docker images
REPOSITORY              TAG       IMAGE ID       CREATED       SIZE
busybox                 latest    b539af69bc01   8 days ago    4.86MB
ubuntu                  latest    1f6ddc1b2547   3 weeks ago   77.8MB
hello-world             latest    9c7a54a9a43c   6 weeks ago   13.3kB
continuumio/anaconda3   latest    c8f78af31723   6 weeks ago   4.3GB
ubuntu                  14.04     13b66b487594   2 years ago   197MB
ubuntu                  15.10     9b9cb95443b5   6 years ago   137MB
user@user-virtual-machine:~$ 
```

![image](https://github.com/Bojun6667/sp111b/assets/99935026/4795d838-d370-4249-a3d8-87f3f0f47b87)
![image](https://github.com/Bojun6667/sp111b/assets/99935026/b3e20253-1409-4c47-adb7-687fec750914)


建立完成後，想要裝jupyternotebook

```
user@user-virtual-machine:~$ docker run -i -t continuumio/anaconda3 /bin/bash
user@user-virtual-machine:~$ docker run -i -t -p 8888:8888 continuumio/anaconda3 /bin/bash -c "/opt/conda/bin/conda install jupyter -y --quiet && mkdir /opt/notebooks && /opt/conda/bin/jupyter notebook --notebook-dir=/opt/notebooks --ip='0.0.0.0' --port=8888 --no-browser --allow-root"
.
.
.
To access the notebook, open this file in a browser:
        file:///root/.local/share/jupyter/runtime/nbserver-1-open.html
    Or copy and paste one of these URLs:
        http://27448a472196:8888/?token=3869a421b9cde2a3786277d2712f6aa45c1a6da8beeff25d
     or http://127.0.0.1:8888/?token=3869a421b9cde2a3786277d2712f6aa45c1a6da8beeff25d

```
點擊連結:http://127.0.0.1:8888/?token=3869a421b9cde2a3786277d2712f6aa45c1a6da8beeff25d
便可進入jupyternotebook

![image](https://github.com/Bojun6667/sp111b/assets/99935026/c51f4411-a5b2-45ab-a20b-47e13d5ef31a)
![image](https://github.com/Bojun6667/sp111b/assets/99935026/65427c0c-d686-4688-bb09-e10454faff66)
![image](https://github.com/Bojun6667/sp111b/assets/99935026/711301b1-87ff-4c30-ba00-8d72d927acf8)

