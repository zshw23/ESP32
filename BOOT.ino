#define BOOT 33//定义开关输入引脚
#define LED  2  //定义LED输出引脚
bool    i=0;   //定义开关状态值

void setup() {
  pinMode(BOOT, INPUT_PULLDOWN);//设置按键引脚为输入下拉电阻模式
  pinMode(LED, OUTPUT);//设置LDE接线引脚为输出模式
  digitalWrite(LED, 1);//设定LED接线引脚电平初始值
}


void loop() {
  if (digitalRead(BOOT))
  {
    delay(10);//延时10ms，消抖
    if(digitalRead(BOOT))
    {
      i=!i;
      digitalWrite(LED,i);
    }
    i=!i;
  }
}
