struct osinfo {
  char osname[30];
  int bitversion;
};

struct osinfo getinfo(void);