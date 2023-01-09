using namespace std;

int main(int arg, char *argv[])
{
  int pid1, pid2;
  struct stat, sp;

  if(arg!=3)
  {
    cout<< "ERROR! Not the correct amount of arguments."
    return 1;
  }

  char *sourcePath = argv[1]; // this places the first argument in the source path
  char *destpath = argv[2];   // this places the second argumetn in the destination path

  pid1 = fork(); // the integer pid1 should store the value of the fork() call
                  // if the value of fork() = 0 then it is a child process
  if(pid1>0)
  {
    wait(null);
    pid2 = fork();
    if(pid2>0)
    {
      wait(null);
      cout <<"Parent Process:" << endl;
      cout <<"PID: " << getpid() << endl;
      cout <<"PPID: " << getppid() << endl;
    }

    else if(pid2==0)
    {
      cout <<"Child Process 1:" << endl;
      cout <<"PID: " << getpid() << endl;
      cout <<"PPID: " << getppid() <<endl;
      if(rename(sourcePath.c_str(),destPath.c_str())
        cout << "Failure!" << endl;
      else
        cout << "Success!" << endl;
    }
  }

  else if(pid1==0)
    {
      cout <<"Child Process 2: " << endl;
      cout <<"PID: " << getpid() << endl;
      cout <<"PPID: " << getppid() << endl;

    }
  }
