#include<iostream>
#include<vector>

int width = 9;

std::vector<std::vector<int>> stagedata(int stage_number)
{
  /*
  * return a stage data((height&width),vector data)
  *
  */

  return stage_data[stage_number];
}

void view(std::vector<std::vector<int>> v)
{
  /*
   * display the vector
   *
   */

  for(int i=0; i<width; i++)
  {
    for(int j=0; j< width; j++)
    {
      if(v[i][j]==1)
      {
        std::cout << "O";
      }else if(v[i][j]==2)
      {
        std::cout << "%";
      }else if(v[i][j]==3)
      {
        std::cout << " ";
      }else if(v[i][j]==3)
      {
        std::cout << "#";
      }else
      {
        std::cout << "?";
      }
    }

    std::cout << "\n";
  }

  /*
   * display map
   * 1=user 2=wall 3=floor 4=goal
   * 
   */
}

int movechecker()
{

  /*
   * return 0 or 1
   * 0 is false, This is user can`t move to select key direction
   *
   */
}

std::vector<std::vector<int>> move()
{
  /*
   * return
   * if user push key, move to select direction
   *   move is rewrite mapvector
   * WHEN: user key push
   *
   */
  char key;
  std::cin >> key;
  movechecker(key);
}

int goalchecker()
{
  /*
   *
   * when user 
   *  user_place==goal_place
   *
   */
}

int main()
{
  // read stage data and refine vector
  std::vector<std::vector<int>> v = stagedata;
  // reaction to user push key and refresh display
  view();
  while(goalchecker)
  {
    move();
    view();
  }
  // (display menu)
  //
  //std::cout << "O" << std::endl;
  return 0;
}
