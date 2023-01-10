#ifndef FOOD
#define FOOD

class Food//creat new apple
{
private:
  int food_location_x;
  int food_location_y;

public:
  Food();
  ~Food();

  void set_foodlocx(int);
  int get_foodlocx();
  void set_foodlocy(int);
  int get_foodlocy();
  void new_food();//random location
};

#endif