/*  You are given a list of data entries that represent entries and exits of groups of people into a buildinng. an entry looks like
    this: 
    {"timestamp": 1526579928, count:3 ,"type":"enter"}
    This means three poeple entered the building. An exit looks like this:
    {"timestamp": 1526579928, count:2 ,"type":"exit"}
    This mean that 2 people exited the building . Timestamp is in Unix time.
    Find the busiest time in the building, that is the time with the most poeple in the building. Return as a pair of (start,end)
    timestamps. You can assume the building always starts off and end up empty ie. with 0 people insides*/
