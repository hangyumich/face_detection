#ifndef UTILITY_H
#define UTILITY_H

#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <iosfwd>
#include <vector>

extern std::string test_data_folder;
extern std::string test_info;

int vectorsum(std::vector<int> v);
std::vector<cv::Rect> ReadRectInfo(std::string folder, std::string filename, std::string image_name);
void draw_rects(cv::Mat *frame, std::vector<cv::Rect> faces, int color, int thickness, int lineType);
bool overlap_bool(cv::Rect rectA, std::vector<cv::Rect> answer, int threshold );
std::vector<std::string> getImageNames (void);

#endif