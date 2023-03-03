double angleClock(int hour, int minutes) 
    {
        float degree;

        if(hour==12)
        degree=360-abs(0.5*(60*hour-11*minutes));
        else
               degree=abs(0.5*(60*hour-11*minutes));
               if(degree>180)
               return (360-degree);
               else return degree;
    }
};
