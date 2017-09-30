node
{
    stage 'Checkout'
        checkout scm

    stage 'Compile'
        sh 'rm -rf build'
        sh 'mkdir build'
        dir('build')
        {
                sh '''
                    cmake -DCMAKE_BUILD_TYPE=Debug ..
                    make
                '''
        }

    stage 'Tests'
        sh 'make test'
}

