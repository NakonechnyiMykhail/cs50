#! python3				#windows
#! /usr/bin/python3 	#linux
#! /usr/bin/env python3 #macos

"""
########### windows
1. we were created python script with name:	test.py
2. create .bat file
inside NAME.bat:

@py.exe C:\path\to\file\test.py %*

3.
IF
add the enviroment path to FOLDER where is our bat-script

in CMD
cd to path
C:\ > NAME

ELSE
go to FOLDER and RUN bat script
C:\path\to\bat > NAME


############ linux
chmod +x pyScript.py
./pyScript.py


"""

#if re.search(r'[A-Z]{3}(_diff)?\.xlsx$', basename):



import shutil, os
os.chdir('/')
shutil.copy('/home/ubuntu/workspace/test2b.c', '/home/ubuntu/workspace/pset5')
os.unlink('/home/ubuntu/workspace/pset5/test2b.c')
os.listdir()
import zipfile
arxiv = zipfile.ZipFile('/home/ubuntu/workspace/new.zip','w')
arxiv.write('/home/ubuntu/workspace/test2b.c', compress_type = zipfile.ZIP_DEFLATED)
arxiv.close()
arxiv = zipfile.ZipFile('/home/ubuntu/workspace/new.zip')
arxiv.namelist()
arxiv.close()
arxiv = zipfile.ZipFile('/home/ubuntu/workspace/new.zip','w')
arxiv.write('/home/ubuntu/workspace/pset5/homepage/', compress_type = zipfile.ZIP_DEFLATED)
arxiv.namelist()
arxiv.close()

















