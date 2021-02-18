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
                
                '''
            }
        }
        stage('Test') {
            steps {
                sh'''
                echo "Creating a test folder"
                mkdir -p test
                echo "test the game"
                ctest build/              
                echo "archiving"
                sh'''
            }
        }
        stage('Deploy') {
            steps {
               echo 'Deploying....' 
            }
        }
    }
}
