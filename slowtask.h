
void slowTask(int taskPeriod)
{
  static unsigned long lastUpdateTime = 0;
  
  if (millis() - lastUpdateTime > taskPeriod) {
    //TODO slowTask
    
    lastUpdateTime = millis();
  }
}
