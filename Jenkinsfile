node
{
    stage 'Checkout'
        checkout scm

    stage 'Compile'
        sh 'rm -rf build'
        sh 'mkdir build'
        sh 'cd build'
        sh 'cmake -DCMAKE_BUILD_TYPE=Debug ..'

    stage 'Tests'
        sh 'make test'
}

