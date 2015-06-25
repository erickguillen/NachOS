#ifndef SWAP_H
#define SWAP_H

#include "openfile.h"
#include <vector>
#include <string>
#inc

typedef int SpaceId;

class Swap{

 public:

  Swap(Thread* hilo);
  ~Swap();
  
  bool isSwaped(int page){
    ASSERT(page >= 0 && page < swapMap.size());
    return MapSwap->Test(page);
  }

  bool swapIn(int page, int frame);
  bool swapOut(int frame,int NumPages);

 private:
  
  OpenFile* swapFile;
  std::string swapFileName;
  
};

#endif
