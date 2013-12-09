#ifndef sumo_h
#define sumo_h

class sumo {
  public:
    sumo ();
    void forward(int l, int r, int t);
    void reverse(int l, int r, int t);
    void rotate(int t);
    void brake(int t);
};
#endif
