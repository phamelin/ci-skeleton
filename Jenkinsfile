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
        dir('build')
        {
            sh 'make test'
        }

    stage 'ASan'
        dir('build')
        {
            sh '''
                cmake -DSANITIZE_ADDRESS=ON ..
                make
                make test
            '''
        }
}

