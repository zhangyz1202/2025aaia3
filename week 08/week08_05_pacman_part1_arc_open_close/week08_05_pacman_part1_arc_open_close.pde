// week08_05_pacman_part1_arc_open_close
// File-Preference 字型放大
void setup(){
  size(400,500);
}
int x = 200, y = 250; // 座標
void draw(){
  background(0);
  fill(255, 255, 0); // 黃色的
  // ellipse(x, y, 30, 30); // 小精靈
  arc(x, y, 30, 30, m, PI*2-m) // 小精靈
  m += dm;
  if (m>1 || m<0) dm = -dm
}  
