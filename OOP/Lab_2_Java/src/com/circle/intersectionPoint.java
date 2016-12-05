//package com.circle;
//public Circle intersectionPoint(Circle O1, Circle O2){
//  double diff = sqrt(pow((O1.x-O2.x),2)+pow((O1.y-O2.y),2))-(O1.r+O2.r);
//  double a = diff + O1.r;
//  double b = diff + O2.r;
//  double d = sqrt(pow((O1.x-O2.x),2)+pow((O1.y-O2.y),2));
//  Circle i = new Circle;
//  Circle j = new Circle;
//  Circle k = new Circle;
//  i.x = O1.x+a/d*(O2.x-O1.x);
//  i.y = O1.y+a/d*(O2.y-O1.y);
//  j.x = i.x + (O2.x-O1.x)/d*(sqrt(O1.r*O1.r-a*a));
//  j.y = i.y - (O2.y-O1.y)/d*(sqrt(O1.r*O1.r-a*a));
//  k.x = i.x - (O2.x-O1.x)/d*(sqrt(O2.r*O2.r-b*b));
//  k.y = i.y - (O2.y-O1.y)/d*(sqrt(O2.r*O2.r-b*b));
//  i.r=sqrt(pow((O1.x-j.x),2)+pow((O1.y-j.y),2))
//  return i;
//}
