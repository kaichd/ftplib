#include<stdio.h>
#include<string.h>
#include<ftplib.h>
int main()
{
    if (ftpOpen("10.10.2.117")==0)
    {
        printf("%s\n","Sever Connect-----------------fail!");
    }
    else
    {
        printf("%s\n","Sever Connect-----------------success!");
    }
    if (ftpLogin("xuwei","123456")==0)
    {
        printf("%s\n","user name and password--------fail!");
    }
    else
    {
        printf("%s\n","user name and password--------success!");
    }
    if ( ftpGet("/mnt/Nand1/comrec", "/home/xuwei/comrec", FTPLIB_ASCII)==0)
    {
        printf("%s\n","File download-----------------fail!");
    }
    else
    {
        printf("%s\n","File download-----------------success!");
    }
/*    if(ftpPut("/home/slb/111111", "/home/a/111111", FTPLIB_ASCII)==0)
    {
        printf("%s\n","File To local-----------------fail!");
    }
    else
    {
        printf("%s\n","File To local-----------------success!");
    }*/



    ftpQuit();
    printf("%s\n","Disconnect!!  Bye Bye!!");

    return 0;
}


/*
#define ftpSite(x) FtpSite(x, DefaultNetbuf)
#define  FtpMkdir(x, DefaultNetbuf)
#define ftpChdir(x) FtpChdir(x, DefaultNetbuf)
#define ftpRmdir(x) FtpRmdir(x, DefaultNetbuf)
#define ftpNlst(x, y) FtpNlst(x, y, DefaultNetbuf)
#define ftpDir(x, y) FtpDir(x, y, DefaultNetbuf)
#define ftpGet(x, y, z) FtpGet(x, y, z, DefaultNetbuf)
#define ftpPut(x, y, z) FtpPut(x, y, z, DefaultNetbuf)
#define ftpRename(x, y) FtpRename(x, y, DefaultNetbuf)
#define ftpDelete(x) FtpDelete(x, DefaultNetbuf)
#define ftpQuit() FtpQuit(DefaultNetbuf)
*/
