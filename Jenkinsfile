node
{
    stage 'Checkout'
        checkout scm

    stage 'Compile'
        sh '''rm -rf build
                mkdir build'
                cd build
                cmake -DCMAKE_BUILD_TYPE=Debug ..'''

    stage 'Tests'
        sh 'make test'
}

