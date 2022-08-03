class MyCalendar {
 public:
  bool book(int start, int end) {
    auto lo = timeline.lower_bound(end);
    if (lo == begin(timeline) || (--lo)->second <= start) {
      timeline[start] = end;
      return true;
    }
    return false;
  }
  map<int, int> timeline;
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */