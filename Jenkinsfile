pipeline {
    agent any
    
    stages {
     
        stage('Build') {
            steps {
                sh '''
                echo "Creating a build folder"
                mkdir -p build
                echo "generate a build system"
                cmake -S game/ -B build/
                echo "build the app"
                cmake --build build/              
                echo "archiving"
                //archiveArtifacts artifacts: 'bin/*'
                '''
            }
        }
        stage('Test') {
            steps {
               echo 'test....' 
            }
        }
        stage('Deploy') {
            steps {
               echo 'Deploying....' 
            }
        }
    }
}
