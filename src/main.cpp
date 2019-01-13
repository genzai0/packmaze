#include<iostream>
#include<vector>

int width = 9;

class StageData
{
public:
  getMap = stagedata(1);
  playerX = 1;
  playerY = 1;
  goalX = 8;
  goalY = 8;

};

std::vector<std::vector<int>> stagedata(int stage_number)
{
  /*
  * return a stage data((height&width),vector data)
  *
  */
  
  stagedata = {
    //stage0
    {{0,0,0,0,0,0,0,0,0},
     {0,1,3,3,3,3,3,3,0},
     {0,3,3,3,3,3,3,3,0},
     {0,3,3,3,3,3,3,3,0},
     {0,3,3,3,3,3,3,3,0},
     {0,3,3,3,3,3,3,3,0},
     {0,3,3,3,3,3,3,3,0},
     {0,3,3,3,3,3,3,4,0},
     {0,0,0,0,0,0,0,0,0}
    },
  {},{},{},{},{},{},{},{}
  }
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
      if(v[i][j]==0)
      {
        std::cout << "%";
      }
      else if(v[i][j]==1)
      {
        std::cout << "O";
      }else if(v[i][j]==2)
      {
        std::cout << "%";
      }else if(v[i][j]==3)
      {
        std::cout << " ";
      }else if(v[i][j]==4)
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
   * 0=wall 1=user 2=wall 3=floor 4=goal
   * 
   */
}

int movechecker(std::vector<std::vector<int>> v, char key, int player_X, int player_Y)
{

  /*
   * return 0 or 1
   * 0 is false, This is user can`t move to select key direction
   *
   */
  
  if(key == "h")
    if(player_X != 0)
      return 1;
  if(key == "j")
    if(player_Y != 0)
      return 1;
  if(key == "k")
    if(player_X != 8)
      return 1;
  if(key == "l")
    if(player_Y != 8)
      return 1;

  return 0;
}

std::vector<std::vector<int>> move(std::vector<std::vector<int>> v, int player_X, int player_Y, StageData d)
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
  if(movechecker(key))
  {
    if(key == "h")
    {
     v[player_X-1][player_Y] == 1;
     d.playerX -= 1;
    }
    else if(key == "j")
    { 
     v[player_X][player_Y+1] == 1;
     d.playerY += 1;
    }
    else if(key == "k")
    { 
     v[player_X][player_Y-1] == 1;
     d.playerY -= 1;
    }
    else if(key == "l")
    { 
     v[player_X+1][player_Y] == 1;
     d.playerX += 1;
    }

    v[player_X][player_Y] = 3;
  }

  return v;
}

int goalchecker(int player_X, int player_Y, int goal_X, int goal_Y)
{
  /*
   *
   * when user 
   *  user_place==goal_place
   *
   */

   if(player_X==goal_X && player_Y==goal_Y)
      return 1;

   return 0;
}

int main()
{
  // read stage data and refine vector
  StageData data;
  std::vector<std::vector<int>> v = data.getmap();
  // player and goal info
  player = v[data.playerX][data.playerY];
  goal_X = StageData.goalX;
  goal_Y = StageData.goalY;
  // reaction to user push key and refresh display
  view(v);
  while(goalchecker(data.playerX,data.playerY,goal_X,goal_Y))
  {
    v = move(v,data.playerX,data.playerY);
    view(v);
  }
  // (display menu)
  //
  //std::cout << "O" << std::endl;
  return 0;

  //memo : make class "stage"=> stage.goal
  //       player_X,player_Y => stage.playerX, stage.playerY
}
