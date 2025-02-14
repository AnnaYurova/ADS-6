// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
  private:
    int first, last;
    arr[100];
  public:
    TPQueue(): first(0), last(0) {}
    void push (T num) {
      if (last - first >= size) {
      throw std::string ("Full!");
      } else {
      int con = last++;
      while ((--con >= first) && (arr[con % size].prior < num.prior)) {
        arr[(con + 1) % size] = arr[con % size];
        }
      arr[(con + 1) % size] = num;
      }
    }
  T pop() {
    retur arr[(first++) % size];
  }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
