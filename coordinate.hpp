#include <iosfwd>
#include <cmath>


struct rdec{
    double x = 0.0;
    double y = 0.0;
};
struct rpol{
    double phi = 0.0;
    double r = 0.0;
};

rdec operator+(const rdec& start, const rdec& end){
    return {start.x + end.x, start.y + end.y};
}

rdec operator-(const rdec& start, rdec& end){
    return {start.x - end.x, start.y - end.y};
}
rdec operator*(const rdec& start, const double& f){
    return {start.x * f, start.y * f};
}
rdec operator*(const double& f, const rdec& end){
    return {f * end.x, f * end.y};
}
rdec operator/(const rdec& start, const double& f){
    return {start.x / f, start.y / f};
}

std::ostream& operator<<(std::ostream& ostrm, const rdec& cor){
    ostrm << "(" << cor.x << ";" << cor.y << ")";
}

double operator*(const rdec &start, const rdec &end){
    return (start.x * end.x + start.y * end.y);
}

rpol operator+(const rpol &start, const rpol &end){
    double tempX = start.r * std::cos(start.phi) + end.r * std::cos(end.phi);
    double tempY = start.r * std::sin(start.phi) + end.r * std::sin(end.phi);
    rpol new_Vector{
        std::sqrt(std::pow(tempX, 2) + std::pow(tempY, 2)),
        std::atan(tempY/tempX)
    };
    return new_Vector;
}
rpol operator-(const rpol &start, const rpol &end){
    double tempX = start.r * std::cos(start.phi) - end.r * std::cos(end.phi);
    double tempY = start.r * std::sin(start.phi) - end.r * std::sin(end.phi);
    rpol new_Vector{
            std::sqrt(std::pow(tempX, 2) + std::pow(tempY, 2)),
            std::atan(tempY/tempX)
    };
    return new_Vector;
}

rpol operator*(const rpol &vec, const double p){
    rpol new_vector{
        vec.r * p,
        vec.phi
    };
    return new_vector;
}
rpol operator*(const double p, const rpol &vec){
    rpol new_vector{
            vec.r * p,
            vec.phi
    };
    return new_vector;
}

rpol operator/(const rpol &vec, const double f){
    rpol new_vector{
        vec.r / f,
        vec.phi
    };
    return new_vector;
}

double operator*(const rpol &start, const rpol &end){
    double startX = start.r * std::cos(start.phi);
    double endX = end.r * std::cos(end.phi);
    double startY = start.r * std::sin(start.phi);
    double endY = end.r * std::sin(end.phi);

    return startX * endX + startY * endY;
}


std::ostream &operator<<(std::ostream &ostrm, const rpol &a) {
    return ostrm << a.r << " " << a.phi << "\n";
}

rpol from_rpol_to_rdec(rpol a){
    rpol new_vector{
        a.r * std::cos(a.phi),
        a.r * std::sin(a.phi)
    };
    return new_vector;
}
rpol from_rdec_to_rpol(rdec a){
    rpol new_vector{
            std::sqrt(a.x * a.x + a.y * a.y),
            std::atan(a.y / a.x)
    };
    return new_vector;
}

double norm(rdec a) {
    return std::sqrt(a.x * a.x + a.y * a.y);
}
double norm(rpol a) {
    return a.r;
}
